#include<stdio.h>

int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("This is Positive Number");
    }
    else{
        printf("This is Non-Positive Number");
    }

    return 0;
}