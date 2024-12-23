#include <stdio.h>
#include<string.h>
// what is string ?
// string means sequence of character and termineted by null character 
int main() {

    // char name[20] = {'m','i','t','e','s','h'};
    char name[20];
    char name2[20];

    // char text[10] = "Sumit";
    // strcpy(name2,"Sumit Sharma");

    // printf("%s\n",name2);
    // scanf("%s",&name);
    // printf("Enter Your Name :");
    puts("Enter Your Name :");

    gets(name);

    // strcpy(name2,name);
    puts(name);
    // printf("%s\n",name);

    return 0;
}