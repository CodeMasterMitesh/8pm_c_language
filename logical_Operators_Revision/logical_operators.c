#include<stdio.h>

int main()
{
    int a,b,c,d;
    a = 10;
    b = 20;
    c = 30;
    d  = 40;
    system("cls");
    // printf("comparison of a and b is %d",(a<b) && (c>d));
    // printf("Ans is %d",(a>b) || (c>d));
    printf("Ans is %d", !(c<d));

    // logic 

    // && and 
    // || or 
    // ! not

    return 0;
}