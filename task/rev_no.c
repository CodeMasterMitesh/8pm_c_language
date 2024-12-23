#include<stdio.h>

int main()
{
    int num = 1234,rev;

    rev = num%10;
    printf("%d",rev);//ans 3


    num = num/10;// and 12
    rev = num%10; //ans 2
    printf("%d",rev);

    num = num/10; //ans 1
    rev = num%10; // ans 1
    printf("%d",rev);

    num = num/10; //ans 1
    rev = num%10; // ans 1
    printf("%d",rev);

    return 0;
}