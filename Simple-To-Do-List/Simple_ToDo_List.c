#include <stdio.h>
#include <string.h>
//   SIMPLE TO-DO LIST
int main() {
    char tasks[50][100]; 
    int taskCount = 0;
    int choice;

    while (1) {
        printf("\n---- TO-DO LIST ----\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n'); 


        switch (choice) {
            case 1: 
                if (taskCount < 50) {
                    printf("Enter task: ");
                    fgets(tasks[taskCount], sizeof(tasks[taskCount]), stdin);
                    tasks[taskCount][strcspn(tasks[taskCount], "\n")] = '\0';
                    taskCount++;
                    printf("Task added successfully !!\n");
                } else {
                    printf("Task list full !!\n");
                }
                break;

            case 2: 
                printf("\n---- Your Tasks ----\n");
                if (taskCount == 0)
                    printf("No tasks yet!\n");
                else {
                    for (int i = 0; i < taskCount; i++) {
                        printf("%d. %s\n", i + 1, tasks[i]);
                    }
                }
                break;

            case 3: 
                if (taskCount == 0) {
                    printf("No tasks to delete !!\n");
                } else {
                    int delete;
                    printf("Enter task number to delete: ");
                    scanf("%d", &delete);
                    while (getchar() != '\n'); // clear leftover newline

                    if (delete >= 1 && delete <= taskCount) {
                        for (int i = delete - 1; i < taskCount - 1; i++) {
                            strcpy(tasks[i], tasks[i + 1]);
                        }
                        taskCount--;
                        printf("Task deleted !!\n");
                    } else {
                        printf("Invalid task number !!\n");
                    }
                }
                break;

            case 4:
                printf("Goodbye! \n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}



