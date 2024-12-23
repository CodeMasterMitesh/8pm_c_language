#include<stdio.h>

int main()
{
    int num1;
    char opr;
    int num2;
    printf("Select Operation Sign(*,/,+,-) :");
    scanf("%c",&opr);
    printf("Enter Value 1 :");
    scanf("%d",&num1);
    printf("Enter Value 2 :");
    scanf("%d",&num2);
    if(opr == '*'){
        int sum = num1 * num2;
        printf("Multi Of Two Value Is%d",sum);
    }else if(opr == '+'){
        int add = num1 + num2;
        printf("Sum Of Two Value Is%d",add);
    }else if(opr == '-'){
        int diff = num1 - num2;
        printf("Diff Of Two Value Is%d",diff);
    }else if(opr == '/'){
        if(num1%num2 == 0){
            int div = num1 / num2;
            printf("Division Of Two Value Is%d",div);
        }else{
            float div = (float) num1 / num2;
            printf("Division Of Two Value Is%.2f",div);
        }
    }else{
        printf("Invalid Operator");
    }
    
    return 0;
}