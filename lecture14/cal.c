#include<stdio.h>

int main()
{   
    char simbols;
    int num;
    int num2;
    int ans;
    printf("Select Sign ex.(+,-,*,/) :");
    scanf("%c",&simbols);

    printf("Enter Your Number :");
    scanf("%d",&num);

    printf("Enter Your Number2 :");
    scanf("%d",&num2);

    if(simbols == '+'){
         ans = num + num2;
        printf("Sum Of Two Value is %d :",ans);
    }else if(simbols == '-'){
        ans =   num - num2;
        printf("Diff  Of Two Value is %d :",ans);
    }else if(simbols == '*'){
        ans =   num * num2;
        printf("Multifiacation  Of Two Value is %d :",ans);
    }else if(simbols == '/'){
        
        if(num%num2 == 0){
            ans =   num / num2;
            printf("Div  Of Two Value is %d :",ans);
        }else{
           float ans1 =   (float)num / num2;
            printf("Div  Of Two Value is %.2f :",ans1);
        }
        
    }else{
        printf("Invalid Input");
    }
    return 0;
}