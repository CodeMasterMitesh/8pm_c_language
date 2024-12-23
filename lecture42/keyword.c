#include <stdio.h>
// macro words
// #define PI 3.14
int cal()
{   
    static int i = 0;
    i++;
    return i;
}
int main() {

    // const int x = 10;
    // // x++;
    // x = 20;
    // printf("%d",x);
    
    // printf("%.2f",PI);
    // static int a;
    // printf("%d\n",a);

    // {
    //     static int a = 10;
    //     printf("%d\n",a);
    // }

    //  a;
    // printf("%d\n",a);
    // int a = 1;
    // int r = cal(a);
    // printf("%d\n",  cal()); // 1
    // printf("%d\n",  cal());
    // printf("%d\n",  cal());

    register int y = 10;

    printf("%d\n",y);

    return 0;
}