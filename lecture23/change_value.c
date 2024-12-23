#include <stdio.h>

// function prototype

int changeValue(int);

int changeValue(int a)
{
    a = 10;
    return a;
}

int main() {

    int x = 20;
    int result = changeValue(x);
    printf("%d",result);
    return 0;
}