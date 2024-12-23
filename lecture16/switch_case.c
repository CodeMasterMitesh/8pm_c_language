#include<stdio.h>

int main()
{   
    char day;
    printf("Enter week Day :");
    scanf("%c",&day);

   switch(day){
    case 'm':
    printf("Today Is Monday");
    break;

    case 't':
    printf("Today is Tuesday");
    break;

    case 'w':
    printf("Today is Wenesday");
    break;

    default:
    printf("Invalid Input");

   }

    return 0;
}