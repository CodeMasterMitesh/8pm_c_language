#include <stdio.h>

int main() {
    // initilzation
    // two dimention array 
    int b[2][3];
    int c[2][3];
    
    // store two dimenstion data from user 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter 6 Value : ");
            scanf("%d",&b[i][j]);
            c[i][j] = b[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           
            printf("%d ",c[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}

// outer loop i 
// inner loop j


// b[0][0] = 1         1 2 3
// b[0][1] = 2         4 5 6
// b[0][2] = 3
// b[1][0] = 4
// b[1][1] = 5
// b[1][2] = 6