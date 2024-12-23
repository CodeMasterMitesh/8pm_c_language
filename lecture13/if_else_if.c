#include<stdio.h>

int main()
{
    char day = 's';

    if(day == 'm')
    {
        printf("Today is Working Day");
    }
    else if(day == 's'){
        printf("Today is Holiday");
    }
    else{
        printf("Invalid Input");
    }
    
    return 0;
}