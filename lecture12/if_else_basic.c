#include<stdio.h>

int main()
{
    int age;
    printf("Enter Your age: ");
    scanf("%d",&age);
    if(age > 17)
    {
        printf("You Can Vote\n");
    }
    else
    {
         printf("You Can't Vote\n");
    }

    printf("End Program");
    return 0;
}