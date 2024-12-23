#include<stdio.h>

int main()
{
    int a = 10,b = 20,c;

    c = a; //c = 10
    a = b; // a  = 20
    b = c; // b = 10
    printf("value of a %d and b %d ",a,b);
    return 0;
}