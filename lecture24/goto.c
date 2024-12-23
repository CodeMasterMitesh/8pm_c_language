#include <stdio.h>

int main() {
    
    // GoTo Statment
    int num = -1;

    if (num > 0)
    {
        goto positive;
    }

    printf("This is Non Positive Number");
    
    return 0;

    positive :
    printf("This is Positive Number");

    return 0;

}