#include <stdio.h>

int main()
{
    // two type of increment operator 
    // pre and post increment
    int a = 17;
    a--;
    printf("Value of a before pre decrement is %d\n",a);
    int result = --a;
    printf("Value of a is %d\n",result);
    return 0;
}
