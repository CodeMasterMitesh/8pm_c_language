#include<stdio.h>

int main()
{
    int x,y,a,b;

    printf("Enter Value x and y :");
    scanf("%d%d",&x,&y);

    printf("Enter Value a and b :");
    scanf("%d%d",&a,&b);

    // printf("Value of x%d y%d a%d %db\n",x,y,a,b);
    // logic operator 

    // &&  and 
    // || or 
    // ! not

    printf("comparision of both value is  %d",(x < y) && (a < b));
    // printf("comparision of both value is  %d",(x > y) || (a > b));
    // printf("comparision of both value is  %d",!(x < y));

    return 0;
}