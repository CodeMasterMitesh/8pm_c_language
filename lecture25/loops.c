#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
       sum +=i;
        if(i == 5){
            printf("sum of 1 to 10 is :%d",sum);
        }
    }
    // printf("sum of 1 to 10 is :%d",sum);
    

    return 0;
}