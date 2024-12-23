#include<stdio.h>

int main()
{   
    int a = sizeof(1);
    float b = sizeof(5.5);
    char c = sizeof('a');
    double d = sizeof(55.5555555555);

    printf("Size of Variable a is %lu\n",a);
    printf("Size of Variable b is %lu\n",b);
    printf("Size of Variable c is %lu\n",c);
    printf("Size of Variable d is %lu\n",d);

 return 0;   
}