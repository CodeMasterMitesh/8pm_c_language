#include <stdio.h>
#include <math.h> // For power function

// Function to handle power calculation
float power(float base, int exponent) {
    return pow(base, exponent); // Using pow from math.h
}

int main() {
    char opr;
    float num1, num2;
    int keepCalculating = 1; // Loop flag

    while(keepCalculating) {
        // Input operator
        printf("\nSelect Operation Sign (+, -, *, /, %%, ^ for power): ");
        scanf(" %c", &opr); // Space before %c to ignore newline

        // Input numbers
        printf("Enter Value 1: ");
        scanf("%f", &num1);
        printf("Enter Value 2: ");
        scanf("%f", &num2);

        // Check if both numbers are integers
        int isNum1Int = (num1 == (int)num1);
        int isNum2Int = (num2 == (int)num2);

        // Perform the operations
        switch (opr) {
            case '+':
                if (isNum1Int && isNum2Int) {
                    printf("Sum of Two Integers Is: %d\n", (int)(num1 + num2));
                } else {
                    printf("Sum of Two Values Is: %.2f\n", num1 + num2);
                }
                break;
            case '-':
                if (isNum1Int && isNum2Int) {
                    printf("Difference of Two Integers Is: %d\n", (int)(num1 - num2));
                } else {
                    printf("Difference of Two Values Is: %.2f\n", num1 - num2);
                }
                break;
            case '*':
                if (isNum1Int && isNum2Int) {
                    printf("Multiplication of Two Integers Is: %d\n", (int)(num1 * num2));
                } else {
                    printf("Multiplication of Two Values Is: %.2f\n", num1 * num2);
                }
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    if (isNum1Int && isNum2Int && ((int)num1 % (int)num2 == 0)) {
                        printf("Division of Two Integers Is: %d\n", (int)(num1 / num2));
                    } else {
                        printf("Division of Two Values Is: %.2f\n", num1 / num2);
                    }
                }
                break;
            case '%':
                if (isNum1Int && isNum2Int) {
                    printf("Modulus of Two Integers Is: %d\n", (int)num1 % (int)num2);
                } else {
                    printf("Error: Modulus operation requires integer inputs.\n");
                }
                break;
            case '^':
                if (isNum1Int && isNum2Int) {
                    printf("Power (Integer) of %d ^ %d Is: %d\n", (int)num1, (int)num2, (int)power(num1, (int)num2));
                } else {
                    printf("Power of %.2f ^ %d Is: %.2f\n", num1, (int)num2, power(num1, (int)num2));
                }
                break;
            default:
                printf("Invalid Operator\n");
        }

        // Ask user if they want to continue
        printf("\nDo you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &keepCalculating);
    }

    printf("Calculator has been exited.\n");
    return 0;
}
