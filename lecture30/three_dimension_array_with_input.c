#include <stdio.h>

int main() {
    // initilzation
    // three dimention array 
    int b[2][2][2];
    
    // store two dimenstion data from user 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Enter 8 Value : ");
                scanf("%d",&b[i][j][k]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           
            for (int k = 0; k < 2; k++)
            {
                printf("%d",b[i][j][k]);
            }
        }
        
        printf("\n");
    }
    return 0;
}