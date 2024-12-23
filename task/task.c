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

int main() {
    int totalMarks = 0;
    float averageMarks = 0.0;
    Students s[1];
    for (int i = 0; i < 1; i++)
    {
       printf("Enter the roll number of student : ");
       scanf("%d",&s[i].rollno);
       printf("Enter the Name of student : ");
       getchar();
       gets(s[i].name);

       for(int j = 0; j < 3; j++){
            printf("Enter the subject name :");
            fflush(stdin);
            gets(s[i].s1[j].subjectName);
            printf("Enter the marks of the subject : ");
            scanf("%d",&s[i].s1[j].m1.marks);
       }
    }

    FILE *fp;

    fp = fopen("student.txt","w");

     fprintf(fp,"Roll Number ");
     fprintf(fp,"Student Name ");
     for (int i = 0; i < 1; i++)
     {
        for(int j = 0; j < 3; j++){
        fprintf(fp,"%s ",s[i].s1[j].subjectName);
        }
     }
     fprintf(fp,"Total Marks ");
     fprintf(fp,"Average Marks\n");

    for(int i = 0; i < 1; i++){
        fprintf(fp,"%d        ",s[i].rollno);
        fprintf(fp,"%s        ",s[i].name);
        for(int j = 0; j < 3; j++){
            fprintf(fp,"%d        ",s[i].s1[j].m1.marks);
            totalMarks+=s[i].s1[j].m1.marks;
        }
    }
    averageMarks = totalMarks/3.0;
    fprintf(fp,"%d        ",totalMarks);
    fprintf(fp,"%.2f    ",averageMarks);

    fclose(fp);
    
    return 0;
}