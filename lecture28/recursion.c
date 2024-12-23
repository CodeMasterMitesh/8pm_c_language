#include <stdio.h>
// what means of recursion?
// factorial 
// factorial of 5
// means 

// Factorial(n)
// n - 1
// 1 * 2 * 3 * n - 1 *...* n
// 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * n - 1 * n 

// factorial = factorial(n - 1) * n;
// function prototype
unsigned long long factorial(unsigned long);

unsigned long factorial(unsigned long n){

    if(n == 1 || n == 0){
        return 1;
    }
   return factorial(n-1) * n;
}
//    n = 5  
// factorial(5-1)
// factorial(4)

//  1 * 2 * 3 * 4 * 5


// void message();

// void message()
// {
//     printf("Hello World");
    //    message();
// }

int main() {

    int x = 20;
    int result = factorial(x);
    printf("%lld",result);
    // message();
    return 0;
}