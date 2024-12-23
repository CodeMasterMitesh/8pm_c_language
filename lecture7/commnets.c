#include<stdio.h>
// topic scanf 
int main()
{
    int a,b,c;
    printf("Enter Value of A and B:");
    scanf("%d%d",&a,&b); //a = user_value
    printf("Value of A Is:%d\n",a);
    printf("Value of B Is:%d\n",b);
    //scanf("%d",&b); //b = user_value
    c  = a + b;
    printf("Sum of a and b is : %d",c);
    return 0;
}