#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// structure of marks
typedef struct {
    int marks;
} Marks;

// structure of subject
typedef struct {
    char subjectName[10];
    Marks m1;
} Subject;

// structure of Students
typedef struct {
    int roll;
    char name[50];
    Subject s1[3];
} Students;

int main() {

     Students s[5];
     int totalMarks = 0;
     float avgMarks;

     for (int i = 0; i < 1; i++)
     {
        printf("Enter the roll number of student : ");
        scanf("%d", &s[i].roll);
        printf("Enter the Name of student : ");
        fflush(stdin);
        gets(s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the subject name : ");
            fflush(stdin);
            gets(s[i].s1[j].subjectName);
            printf("Enter the marks of subject : ");
            scanf("%d", &s[i].s1[j].m1.marks);
            totalMarks += s[i].s1[j].m1.marks;
        }
        
     }

     FILE *fp;

     fp = fopen("student.txt", "w");

     for (int i = 0; i < 1; i++)
     {
        fprintf(fp, "Roll Number : %d\n", s[i].roll);
        fprintf(fp, "Name : %s\n", s[i].name);
        for (int j = 0; j < 3; j++)
        {
           fprintf(fp, "Subject Name : %s\n", s[i].s1[j].subjectName);
           fprintf(fp, "Marks : %d\n", s[i].s1[j].m1.marks);
        }
        
     }
     avgMarks = (float) totalMarks / 3;
     fprintf(fp, "Total Marks : %d\n", totalMarks);
     fprintf(fp, "Average Marks : %.2f\n", avgMarks);
     
     fclose(fp);

    return 0;
}