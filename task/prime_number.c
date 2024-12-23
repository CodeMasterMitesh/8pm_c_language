#include<stdio.h>
#include<math.h>

int main() {
    int num = 7, i = 2, isPrime = 1;

    // printf("Enter Number: ");
    // scanf("%d", &num);

    if(num <= 1) {
        printf("This is Not a Prime Number\n");
        return 0;
    }

    while (i <= sqrt(num)) {
        printf("%d",sqrt(num));
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime == 1) {
        printf("This is a Prime Number\n");
    } else {
        printf("This is Not a Prime Number\n");
    }

    return 0;
}