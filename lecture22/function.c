#include<stdio.h>

// function prototype
// void hello();
int sum(int,int);

int sum(int x, int y)
{
    printf("Sum of two value is %d\n",x+y);
}


// function define
// void hello()
// {
//     printf("Welcome To Patel Web Solution\n");
// }



int main()
{
    int a;
    int b;
    printf("Enter Value for a :");
    scanf("%d",&a);
    printf("Enter Value for b :");
    scanf("%d",&b);

    int a1 = 25;
    int b1 = 35;

    sum(a,b);

    sum(a1,b1);
    // hello();
    // hello();
    // hello();
    return 0;
}