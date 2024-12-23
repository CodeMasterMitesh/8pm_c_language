#include <stdio.h>
#include <windows.h> // For usleep()

void delay(int milliseconds) {
    Sleep(milliseconds); // Sleep takes milliseconds directly
}

int main(){

    int n = 5;
    int middleSpaces =9;

    // for top diamond
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = i; j < n + 5; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i -1); k++)
        {
            printf("*");
        }
       printf("\n");
    }

    // for Middlle section with space
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int s = 1; s <= middleSpaces; s++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // for Bottom section with space
    
    for (int i = n - 1; i >= 1; i--)
    {
         for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int s = 1; s <= middleSpaces; s++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Bottom diamond

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i - 5; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i -1); k++)
        {
            printf("*");
        }
       printf("\n");
    }
    

    return 0;
}