#include <stdio.h>
#include <string.h>
// file handling
int main() {
    
    FILE *fp;

    char text[50] = "Mitesh Prajapati";

    fp = fopen("first.txt","w");

    for (int i = 0; i < strlen(text); i++)
    {
        fputc(text[i],fp);
    }
    
    fclose(fp);
    return 0;
}