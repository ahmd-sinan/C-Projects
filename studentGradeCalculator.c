#include <stdio.h>

float calculateAverage(int marks[]) {
    int sum = 0;
    for(int i=1; i<=5; i++) {
        sum += marks[i];
    }
    return (float)sum / 5;  
}

char getGrade(float avg) {
    if(avg >= 90) return 'A';
    else if(avg >= 80) return 'B';
    else if(avg >= 70) return 'C';
    else if(avg >= 60) return 'D';
    else return 'F';
}


int main() {
    int marks[5];
    printf("Enter marks for 5 subjects: \n");
    for(int i=1; i<=5; i++) {
        scanf("%d", &marks[i]);
    }

    float avg = calculateAverage(marks);
    char grade = getGrade(avg);

    printf("Average Marks: %.2f\n", avg);
    printf("Grade: %c\n", grade);

    return 0;
}
