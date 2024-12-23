// 
// while 
// do while 
// for 

#include<stdio.h>

int main()
{
    // printf("%d",a);
    //initilization
    // condition -> true -> loop
    // statment
    // incriment/decrement

    // while (a <= 10)
    // {
    //     printf("%d -> Hello world\n",a);
    //     a++;
    // }

    // do
    // {
    //     printf("%d -> Hello world\n",a);
    //     a++;
    // } while (a <= 10);

    int num = 10;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum +=i;
        printf("%d\n",sum);
    }

    return 0;
}
