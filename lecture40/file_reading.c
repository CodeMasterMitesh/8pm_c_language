#include <stdio.h>
#include <stdlib.h>
// file reading mode
int main() {
    
    FILE *fp;

    char text;

    fp = fopen("first.txt","r");

    if (fp == NULL)
    {
        printf("File Not Exist");
        exit(1);
    }

    text = fgetc(fp);

    while (!feof(fp))
    {
        printf("%c",text);
        text = fgetc(fp);
    }
    
    

    fclose(fp);
    

    return 0;
}