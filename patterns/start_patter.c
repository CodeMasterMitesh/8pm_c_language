#include <stdio.h>

int main() {

    int i,j,k,l,num = 5;
    for (i =1; i <= num; i++)
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
    // left angle 
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= i; k++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    // Second half of the pattern
    for (int i = num - 1; i >= 1; i--) {
        for (int j = 1; j <= num - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 1; k <= i; k++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    // right angel

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i =0; i <= num; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf(" ");
        }
        for (l = num - 1; l >= i; l--)
        {
            printf("*");
        }
        printf("\n");
    }
    // printf("Hi");

    // for (i=num; i >= 1; i--)
    // {
    //     for (j = i; j < num; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (k = 1; k <= (2 * i - 1); k++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");
    // }
    return 0;
}