#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter Value of a:");
    scanf("%d",&a);
    printf("Enter Value of b:");
    scanf("%d",&b);

    printf("value of a%d and b%d \n",a,b);
    // global method for Swapping value + -
    // global method for Swapping value * /
    a = a + b; // a  = 30
    b = a - b; // b = 10
    a = a - b; // a = 20

    printf("value of a%d and b%d ",a,b);

    return 0;
}