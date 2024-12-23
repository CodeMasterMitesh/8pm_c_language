#include <stdio.h>

// function prototype

int test();

int test()
{
    int a = 10;
   int b = 20;
    return a + b;
}

int main() {

    int x = 20;
    int result = test();
    printf("%d",result);
    return 0;
}