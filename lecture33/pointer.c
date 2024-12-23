#include <stdio.h>
// pointer
int main() {
    
    int a = 25;

    int *p = &a;

    int **p2 = &p;

    int ***p3 = &p2;

    printf("Value of A = %d\n",a);

    printf("Address of variable a = %d\n",p);

    printf("Value of variable a using Pointer = %d\n",*p);

    printf("Address of pointer p = %d\n",p2);

    printf("Value of variable a using Pointer of pointer = %d\n",**p2);

    printf("Address of pointer p2 = %d\n",p3);

    printf("Value of variable a using Pointer of pointer of pointer = %d\n",***p3);
    return 0;
}