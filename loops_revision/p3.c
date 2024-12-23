#include <stdio.h>
// right arrow  pattern

// *
// **   
// ***  
// **** 
// *****
// **** 
// ***  
// **   
// *    

int main() {

    int n = 5;
    int i;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
        
    return 0;
}