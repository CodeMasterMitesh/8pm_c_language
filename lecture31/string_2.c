#include <stdio.h>
#include<string.h>

int main() {

    char name[20] = "malayalam";
    char name1[20] = "sanket";
    char name2[20] = "Suthar";
    char text[20];

    // strcpy(name2,name);
    // strcat(name,name2);
    // int r = strcmp(name,name1);
    // int r = stricmp(name,name1);
    // printf("%d",r);

    // if(r == 0 || r == 1){
    //     printf("Both Name is same");
    // }else{
    //     printf("Both Name is Not same");
    // }
    // printf("%s",name);
    strcpy(text,name);
    puts(text);
    puts(name);
    strrev(text);
    puts(text);

    if(strcmp(text,name) == 1 || strcmp(text,name) == 0){
        printf("This is Palidrome");
    }else{
        printf("This is Not Palidrome");
    }
   

    return 0;
}