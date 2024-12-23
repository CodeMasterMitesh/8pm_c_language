#include<stdio.h>

int main()
{
    int num = 1;
    int table = 5;
    //loops
    // while 
    // do while 
    // for 

    while (num <= 10)
    {
        int ans = table * num;
        printf("%d * %d = %d\n",table,num,ans);
        num++;
    }

    return 0;
}