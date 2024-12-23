#include <stdio.h>
#include<string.h>
// pointer with string
int main() {
             
    char name[50];
    char *ptr;

    ptr = name; //ptr = &name[0]

    printf("Enter Name :");

    gets(ptr);
    
    puts(ptr); 
    
    return 0;
}