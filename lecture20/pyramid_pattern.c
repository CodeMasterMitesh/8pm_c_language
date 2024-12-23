#include<stdio.h>

int main()
{   

    int i , j , k, num = 5;

    for (i = 1; i <= num; i++) // outer loop for row print 5 time
    {
        
        for(j = i; j < num; j++){ // print space
            printf(" ");
        }          
        for(k = 1;k <= (2 * i - 1); k++){ // print *
            printf("*");
        }

       printf("\n");
    }
    
    return 0;
}

//     *
//    ***
//   *****
//  *******
// *********