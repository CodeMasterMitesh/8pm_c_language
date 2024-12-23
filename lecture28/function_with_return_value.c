#include <stdio.h>
// function prototype 
int sum(int,int);

// function define 

int sum(int a,int b)
{
    
    int c = a + b;
    return c;
}

int main() {

    int x,y;
    x = 15;
    y = 25;
    int result = sum(x,y);
    printf("%d",result);

    return 0;
}