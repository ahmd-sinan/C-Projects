# Simple To-Do List
A lightweight, console-based To-Do List application written in C. This program allows users to seamlessly manage their daily tasks directly from the terminal. 
It demonstrates core C programming concepts, including 2D arrays, string manipulation (strcpy, strcspn), loop control, and proper input buffer handling.

## Features
Add Tasks: Quickly add new tasks to your list (supports up to 50 active tasks).
View Tasks: Display all current tasks with their corresponding item numbers.
Delete Tasks: Remove completed tasks by their number. The list automatically shifts to fill the gap, keeping your list organized!
Robust Input Handling: Gracefully handles leftover newline characters in the input buffer using getchar(), preventing infinite loops or skipped inputs.

## How to Compile and Run
Clone or Download the repository to your local machine.

- Compile the code using GCC:
```Bash
gcc Simple_ToDo_List.c -o todo
```
- Run the compiled executable:
  - On Linux/macOS:
  ```Bash
  ./todo
  ```
  - On Windows:
  ```DOS
  todo.exe
  ```

## 💻 Example Output
```Plaintext
---- TO-DO LIST ----
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 1
Enter task: Finish C programming assignment
Task added successfully !!

---- TO-DO LIST ----
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
Enter your choice: 2

---- Your Tasks ----
1. Finish C programming assignment
```
