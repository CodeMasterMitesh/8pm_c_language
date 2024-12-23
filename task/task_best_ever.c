#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int marks;
} Marks;

typedef struct {
    char subjectName[20];
    Marks m1;
} Subjects;

typedef struct {
    int rollno;
    char name[20];
    Subjects s1[3];
} Students;

// Function to calculate total and average marks
void calculateMarks(Students *student, int *totalMarks, float *averageMarks) {
    *totalMarks = 0;
    for (int j = 0; j < 3; j++) {
        *totalMarks += student->s1[j].m1.marks;
    }
    *averageMarks = *totalMarks / 3.0;
}

// Function to input student data
void inputStudentData(Students *student) {
    printf("Enter the roll number of student: ");
    scanf("%d", &student->rollno);
    printf("Enter the name of student: ");
    getchar();  // Clear newline character
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0'; // Remove newline

    for (int j = 0; j < 3; j++) {
        printf("Enter the subject name: ");
        fgets(student->s1[j].subjectName, sizeof(student->s1[j].subjectName), stdin);
        student->s1[j].subjectName[strcspn(student->s1[j].subjectName, "\n")] = '\0';

        printf("Enter the marks of the subject: ");
        scanf("%d", &student->s1[j].m1.marks);
        getchar();  // Clear newline
    }
}

// Function to write student data to file
void writeToFile(Students *student, int totalMarks, float averageMarks) {
    FILE *fp = fopen("student.txt", "w");
    if (fp == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "Roll Number  Student Name        ");
    for (int j = 0; j < 3; j++) {
        fprintf(fp, "%-20s", student->s1[j].subjectName);
    }
    fprintf(fp, "Total Marks  Average Marks\n");

    fprintf(fp, "%-12d  %-20s", student->rollno, student->name);
    for (int j = 0; j < 3; j++) {
        fprintf(fp, "%-20d", student->s1[j].m1.marks);
    }
    fprintf(fp, "%-12d  %.2f\n", totalMarks, averageMarks);

    fclose(fp);
}

int main() {
    int totalMarks = 0;
    float averageMarks = 0.0;

    // Dynamic allocation for one student (can be extended for more)
    Students *student = (Students *)malloc(sizeof(Students));

    inputStudentData(student);
    calculateMarks(student, &totalMarks, &averageMarks);
    writeToFile(student, totalMarks, averageMarks);

    free(student); // Free allocated memory
    printf("Data written to 'student.txt' successfully.\n");
    return 0;
}