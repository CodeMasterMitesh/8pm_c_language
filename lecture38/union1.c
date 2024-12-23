#include <stdio.h>
// union example
typedef union 
{
    int a;
    int b;
    float c;
}example;

int main() {
    
    example c1;
    c1.a = 1;
    c1.b = 2;
    c1.c = 30.33;
    

    
    printf("%d\n",c1.a);
    printf("%d\n",c1.b);
    printf("%.2f\n",c1.c);
    printf("%d\n",c1.a);

    return 0;
}