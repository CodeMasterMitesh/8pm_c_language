#include <stdio.h>
// value swaping
void swapValue(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {

    int a = 10,b = 20,c;

    swapValue(&a,&b);

    printf("In main Function a = %d and b = %d\n",a,b);
    // c = a;//10
    // a = b;//20
    // b = c; //10    
    // printf("a = %d and b = %d\n",a,b);
    return 0;
}