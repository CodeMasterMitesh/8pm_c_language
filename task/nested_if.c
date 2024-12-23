#include<stdio.h>

int main()
{
    int num = 111;

    if(num > 100){
        if(num < 110){
            printf("Value Printd Betweeb 100 TO 110");
        }else{
            printf("Value is morethan 110");   
        }
    }else{
        printf("Value is less than 100");
    }

    return 0;
}