//    ----1
//    ---12 1
//    --123 12
//    -1234 123
//    12345 1234

#include <stdio.h>

int main() {
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
           printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        for (int k = 1; k < i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    

    return 0;
}


