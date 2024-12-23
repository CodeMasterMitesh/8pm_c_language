#include<stdio.h>

int main()
{
    int i,j, num = 5;
    for (i = 1; i <= num; i++)
    {
        // printf("%d value of i - ",i);
        for (j = 1; j <= (2* i -1); j++)
        {
            // printf("%d value of j",j);
             printf("*");
        }
        printf("\n");
    }
    

    return 0;
}

    //      *
    //     ***
    //    *****
    //   *******
    //  *********
    //   *******
    //    *****
    //     ***
    //      *