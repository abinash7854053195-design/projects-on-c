/*
 ------------------------------STUDENT_MANAGEMENT_SYSTEM -------------------------------
 By:- ABINASH DAS
 Language:- C
 Concepts Used:-

            -Structures

            -File handling

            -Functions

            -Conditional statements

Features:-
✅ Add student record
✅ Display all students
✅ Search student by roll number
✅ Update or delete records
✅ Store data in file permanently

*/



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define DATA_FILE "students.txt"
#define TEMP_FILE "temp.txt"
#define LINE_SIZE 256
#define NAME_SIZE 100




// Helper function implementations
void trim_newline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

int parse_line(const char *line, int *roll_no, char *name, int *age, float *marks) {
    return sscanf(line, "%d|%99[^|]|%d|%f", roll_no, name, age, marks) == 4;
}


//                                                         ----:STUDENT_MANAGEMENT_SYSTEM(C):----

struct student{
    int roll_no;
    char name[50];
    int age;
    float marks;
};
// Function to check if roll number already exists

int isduplicateroll(int roll_no) {
    FILE *fptr = fopen(DATA_FILE, "r");
    if (fptr == NULL) {
        return 0; // File doesn't exist, so no duplicates
    }

    char line[LINE_SIZE];
    int existing_roll;
    char name[NAME_SIZE];
    int age;
    float marks;

    while (fgets(line, sizeof(line), fptr) != NULL) {
        trim_newline(line);
        int ok = parse_line(line, &existing_roll, name, &age, &marks); {
            if (ok && existing_roll == roll_no) {
                fclose(fptr);
                return 1; // Duplicate found
            }
        }
    }

    fclose(fptr);
    return 0; // No duplicate found
}
// 1. Add Student----

void addstudent() {
    struct student s;

    printf("\nEnter Roll No: ");
    if (scanf("%d", &s.roll_no) != 1) {
        printf("Invalid Roll No!\n");
        while (getchar() != '\n');
        return;
    }
    getchar();
int isduplicateroll(int roll_no);
    if (isduplicateroll(s.roll_no)) {
        printf("Roll No %d already exists! Record not added.\n", s.roll_no);
        return;
    }

    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    trim_newline(s.name);

    printf("Enter Age: ");
    if (scanf("%d", &s.age) != 1) {
        printf("Invalid Age!\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter Marks: ");
    if (scanf("%f", &s.marks) != 1) {
        printf("Invalid Marks!\n");
        while (getchar() != '\n');
        return;
    }
    getchar();

    FILE *fptr = fopen(DATA_FILE, "a+");
    if (!fptr) {
        perror("Error opening file");
        return;
    }

    // Write with '|' as separator for easy parsing
    fprintf(fptr, "%d|%s|%d|%.2f\n", s.roll_no, s.name, s.age, s.marks);
    fclose(fptr);

    printf("\n Student added successfully!\n");
    printf("Roll No: %d\nName: %s\nAge: %d\nMarks: %.2f\n", s.roll_no, s.name, s.age, s.marks);
}

// 2. Display All Students----

void displayStudents() {
    FILE *fptr = fopen(DATA_FILE, "r");
    if (!fptr) {
        puts("\n No records found.");
        return;
    }

    char line[LINE_SIZE];
    int roll, age;
    char name[NAME_SIZE];
    float marks;

    printf("\n---------------------------------------------------\n");
    printf("%-6s %-20s %-6s %-6s\n", "Roll", "Name", "Age", "Marks");
    printf("---------------------------------------------------\n");

    int any = 0;
    while (fgets(line, sizeof(line), fptr)) {
        if (parse_line(line, &roll, name, &age, &marks)) {
            printf("%-6d %-20s %-6d %-6.2f\n", roll, name, age, marks);
            any = 1;
        }
    }

    if (!any){
        printf("\nNo data to display.\n");}

    printf("---------------------------------------------------\n");
    fclose(fptr);
}

// 3. Search Student by Roll No----

void searchstudent() {
   int target;
   char line[LINE_SIZE];
   char name[NAME_SIZE];
   int age;
   int roll_no;
   float marks;
   int found = 0;

   printf("Enter Roll No to search: ");
   if(scanf("%d", &target) != 1) {
       printf("Invalid input!\n");
       while(getchar() != '\n'); // clear input buffer
       return;
   }
   getchar(); // consume newline character

   FILE *fptr = fopen(DATA_FILE, "r");
   if(fptr == NULL) {
       printf("ERROR opening file!\n");
       return;
   }
   while (fgets(line, sizeof(line), fptr) != NULL) {
        trim_newline(line);
        if(parse_line(line, &roll_no, name, &age, &marks)) {
            if (roll_no == target) {
                printf("\nFound:\nRoll No: %d\nName: ", roll_no);
                puts(name);
                printf("Age: %d\nMarks: %.2f\n", age, marks);
                found = 1;
                break;

        }

           }
       }
       if(!found) {
           printf("Student with Roll No %d not found.\n", target);
       }
         fclose(fptr);
}
//4.Delete Student --

void deletestudent()
{
    int target;
    char line[LINE_SIZE];
    char name[NAME_SIZE];
    int age;
    int roll_no;
    float marks;
    int deleted = 0;

    printf("\nEnter Roll No to delete: ");
    if(scanf("%d", &target) != 1) {
        printf("Invalid roll_no input!\n");
        while(getchar() != '\n'); // clear input buffer
        return;
    }
    getchar(); // consume newline character

    FILE *fptr = fopen(DATA_FILE, "r");
    if(!fptr) {
        puts("No record (file not found)!\n");
        return;
    }
    FILE *tempfptr = fopen(TEMP_FILE, "w");
    if(!tempfptr) {
        printf("ERROR: can't create temporary file!\n");
        fclose(fptr);
        return;
    }
    while (fgets(line, sizeof(line), fptr)) {
        if (parse_line(line, &roll_no, name, &age, &marks)) {
            if (roll_no == target) {
                deleted = 1;
                continue;
            }
            fprintf(tempfptr, "%d|%s|%d|%.2f\n", roll_no, name, age, marks);
    }
    fclose(fptr);
    fclose(tempfptr);

    if(deleted) {
        remove(DATA_FILE);
        rename(TEMP_FILE, DATA_FILE);
        puts("Student record deleted successfully.\n");
    } else {
        remove(TEMP_FILE);
        printf("\nStudent with Roll No %d not found, Nothing deleted.\n", target);
    }
  }
}
 // 5. Update Student----

void updatestudent(){
    int target;
    char line[LINE_SIZE];
    char name[NAME_SIZE];
    int age;
    int roll_no;
    float marks;
    int updated = 0;

    printf("\nEnter Roll No to update: ");
    if(scanf("%d", &target) != 1) {
        puts("Invalid roll_no input!\n");
        while(getchar() != '\n'); // clear input buffer
        return;
    }
    getchar(); // consume newline character
    
    FILE *fptr = fopen(DATA_FILE, "r");
    if(!fptr) {
        puts("No record (file not found)!\n");
         return;
    }
    FILE *tempfptr = fopen(TEMP_FILE, "w");
    if(!tempfptr) {
        printf("ERROR:can't create temporary file!\n");
        fclose(fptr);
        return;
    }       
    while (fgets(line, sizeof(line), fptr) != NULL) {
        trim_newline(line);
        if(parse_line(line, &roll_no, name, &age, &marks)) {

            if (roll_no == target) {
                puts("Enter new details:\n");
                printf("Roll No: %d\n", roll_no);
                puts(name);
                printf("Age: %d\n", age);
                printf("Marks: %.2f\n", marks);
                
                //take new input
                char new_name[NAME_SIZE];
                float new_marks;
                

                printf("Enter new_Name: ");
                fgets(new_name, sizeof(new_name), stdin);
                trim_newline(new_name);
                if(strlen(new_name)==0){
                    strcpy(new_name,name);//keep old name if no input
                }
                printf("Enter new_age: ");
                int new_age;
                if(scanf("%d", &new_age)!=1){
                    new_age=age; //keep old age if invalid input
                    while(getchar()!='\n');
                }
                printf("Enter new_marks: ");
                if(scanf("%f", &new_marks)!=1){
                    puts("Invalid marks input! Keeping old marks.\n");
                    new_marks=marks; //keep old marks if invalid input
                    while(getchar()!='\n');
                }else{
                    if (new_marks<0)
                    new_marks=marks; //keep old marks if negative input
                    getchar();//clear newline
                } 
                /* write updated record using new values */
                fprintf(tempfptr, "%d|%s|%d|%.2f\n", roll_no, name, age, marks);
                
            } else {
            //write unchanged records
            fprintf(tempfptr, "%d|%s|%d|%.2f\n", roll_no, name, age, marks);
                }
        }
    }
    fclose(fptr);
    fclose(tempfptr);

    if(updated) {
        remove(DATA_FILE);
        rename(TEMP_FILE, DATA_FILE);
        puts("Student record updated successfully.\n");
    } else {
        remove(TEMP_FILE);
        printf("\nStudent with Roll No %d not found,Nothing updated.\n", target);
    }
}
//6.Main Menu ----

int main(void){
    int choice;

    while(1){
        printf("\n---STUDENT MANAGEMENT SYSTEM---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Delete Student by Roll No\n");
        printf("5. Update Student by Roll No\n");
        printf("6. Exit\n");
        printf("\n-------------------------------\n");
        printf("Enter your choice: ");
        if(scanf("%d", &choice)!=1){
            puts("Invalid input! Please enter a number between 1-6.\n");
            while(getchar()!='\n'); //clear input buffer
            continue;
        }
        getchar(); //to consume newline character left by previous scanf

        switch(choice){
            case 1:
                addstudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchstudent();
                break;
            case 4:
                deletestudent();
                break;
            case 5:
                updatestudent();
                break;
            case 6:
                puts("\nExiting the program. Goodbye!\n");
                exit(0);
            default:
                puts("Invalid choice! Please try again ,enter 1-6.\n");
        }
        }
        return 0;
    }

//-----------------:END OF THE PROJECT:-----------------
    //DONE---------*