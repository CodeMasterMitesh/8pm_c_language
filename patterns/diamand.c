#include<stdio.h>

int main()
{ 
    int i,j,k,num = 5;
    for (i = 1; i <= num; i++)
    {
        for (j = i; j < num; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i -1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = num -1; i >= 1; i--)
    {
        for (j = num; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i -1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}