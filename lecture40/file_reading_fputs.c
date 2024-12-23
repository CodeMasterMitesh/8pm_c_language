#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// file reading mode
int main() {
    
    FILE *fp;

    char text[100];
    printf("Enter Some Text :");
    gets(text);
    fp = fopen("first.txt","a+");

    if (fp == NULL)
    {
        printf("File Not Exist");
        exit(1);
    }
    fputs(text,fp);
    fclose(fp);
    

    return 0;
}