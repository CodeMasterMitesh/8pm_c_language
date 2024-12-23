#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// file reading mode
int main() {
    
    FILE *fp;

    char text[100];

    fp = fopen("first.txt","r");

    if (fp == NULL)
    {
        printf("File Not Exist");
        exit(1);
    }

    printf("%s",fgets(text,17,fp));
    fclose(fp);
    

    return 0;
}