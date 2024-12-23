#include <stdio.h>

// function prototype
int myFunction();
// Gloabal Scope
int b = 25;

// function declaration
// Local Scope
int myFunction()
{
    // local variable
    int x = 15;
    int b = 62;
    printf("x = %d \n",x);
    printf("b = %d \n",b);
}

int main() {

    myFunction();
    // local variable not same
    int x = 5;
    printf("x = %d \n",x);
    printf("b = %d \n",b);
    return 0;
}