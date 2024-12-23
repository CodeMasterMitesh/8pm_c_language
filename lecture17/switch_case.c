#include<stdio.h>

int main()
{   
    char sign;
    int num1;
    int num2;
    int ans;

    printf("Select Sign +,-,*,/ :");
    scanf("%c",&sign);
    printf("Enter Number 1 :");
    scanf("%d",&num1);
    printf("Enter Number 2 :");
    scanf("%d",&num2);

    switch (sign)
    {
    case '+':
        ans = num1 + num2;
        printf("Sum of num1 and num2 is :%d",ans);
        break;

    case '-':
        ans = num1 - num2;
        printf("Diff of num1 and num2 is :%d",ans);
        break;

    case '*':
        ans = num1 * num2;
        printf("Multi of num1 and num2 is :%d",ans);
        break;

    case '/':
        ans = num1 / num2;
        printf("Div of num1 and num2 is :%d",ans);
        break;
    
    default:
        break;
    }

    return 0;
}