#include <stdio.h>
// function prototype with para
int cal(int,int);

// function with parameters
int cal(int a, int b)
{
    // int a = 10;
    // int b = 20;
    int c = a + b;
}

int main() {
    
    int a1 = 35;
    int b1 = 45;

    // int c1 = a1+b1;
    int result = cal(a1,b1);
    printf("%d\n",result);
    
    int x = 15;
    int y = 80;
    int ans = cal(x,y);

    printf("%d\n",ans);
    // printf("%d",c1);
    return 0;
}