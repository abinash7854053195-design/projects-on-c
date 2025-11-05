# 🎓 Student Management System (C Language)

A **Student Management System** built in **C language** using **file handling**, **structures**, and **functions**.  
This project allows you to **add, view, search, update, and delete** student records — all stored **permanently in a text file**.

---

## 👨‍💻 Author  
**Abinash Das**  
[GitHub Profile](https://github.com/abinash7854053195-design)

---

## ⚙️ Features

✅ Add new student records  
✅ Display all student details  
✅ Search student by Roll Number  
✅ Update student details  
✅ Delete student records  
✅ Data permanently stored in file  
✅ Input handled using `fgets()` and `puts()` for safety  

---

## 🧠 Concepts Used

- Structures  
- File Handling  
- Functions  
- Conditional Statements  
- Data Validation  
- String Handling (`fgets`, `strcspn`, `strcmp`, etc.)

---

## 📁 File Information

| File Name                     | Description                                    |
|------------------------------|------------------------------------------------|
| `student_management_system.c` | Main program source code                        |
| `students.txt`                | Data file that stores student records          |
| `temp.txt`                    | Temporary file used during update/delete        |

---

## 💻 How to Run

### 1️⃣ Clone the repository  
```bash
git clone https://github.com/abinash7854053195-design
cd whatever-your-folder-name
2️⃣ Compile the program
bash
Copy code
gcc student_management_system.c -o sms
3️⃣ Run the executable
bash
Copy code
./sms
🖼️ Example Menu
markdown
Copy code
---STUDENT MANAGEMENT SYSTEM---
1. Add Student
2. Display All Students
3. Search Student by Roll No
4. Delete Student by Roll No
5. Update Student by Roll No
6. Exit
Enter your choice:
🧩 Future Enhancements
🚀 Add GPA calculation

🗓️ Add date of birth field

🌐 Convert into a mini GUI using GTK or ncurses

📊 Export records to .csv for Excel

🏆 Purpose
This project is developed as a first-year C project,
aimed at strengthening understanding of file handling, data management in C, and code structuring.
