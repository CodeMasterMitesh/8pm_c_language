#include <stdio.h>

//Factorial(5) // 5 -1 
// 1 * 2 * 3 * 4 * 5 = 120
//Factorial(n) // n -1 
// 1 * 2 * 3 * 4 * 5 *...n-1 * n

// function prototype
int factorial(int);

// function define

int factorial(int n)
// function body
{
   
    if(n == 1 || n == 0){
        return 1;
    }
    // function call
   return factorial(n - 1) * n;// 5 * 4 * 3 * 2 * 1
}

// 1 time 5 * 4
// second time 5 * 4 * 3 
// third time 5 * 4 * 3 * 2

// fourth time 5 * 4 * 3 * 2 * 1 * 1

int main() {

    int x;
    printf("Enter Value :");
    scanf("%d",&x);
    int result = factorial(x);
    printf("factorial of %d is %d",x,result);  

    return 0;
}