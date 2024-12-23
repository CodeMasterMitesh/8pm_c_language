#include<stdio.h>

int main()
{   
    int num,ans;
    scanf("%d",&num);// 123
    ans = num%10; //3
    printf("%d",ans); // print 3


    num = num/10; // 123 ans 12
    ans = num%10; // ans 12 ans 2
    printf("%d",ans); //print 2

    num = num/10; // 12 and 1
    ans = num%10; // ans 1
    printf("%d",ans); // 1

    // num = num/10; // 12
    // ans = num%10; // ans
    // printf("%d",ans);

    // num = num/10; // 12
    // ans = num%10; // ans
    // printf("%d",ans);
    
    return 0;
}