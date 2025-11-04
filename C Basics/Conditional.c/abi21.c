#include<stdio.h>
int main() {
    //check if a student has passed or failed
    int mark;
    printf("Enter the marks obtained: ");
    scanf("%d", &mark);
    if(mark>=0 && mark<=32){
        printf("The student is failed\n");
    } else if(mark>32 && mark<=100){
        printf("The student is passed\n");
    } else{
        printf("Invalid marks entered\n");
    }
    return 0;
}
/* by ternary operator
mark > 32 ? printf("The student is passed\n"): printf("The student is failed\n");
*/