#include<stdio.h>

int main()
{
    int time;
    time = -1;
    // b = 20

    // if(condition){
    //     statment;
    // }
    if(time >= 17 && time < 19 ){
        printf("Good Noon");
    }else if(time < 17 && time > 12){
        printf("Good After Noon");
    }else if(time >= 5 && time < 12){
        printf("Good Morning");
    }else if(time > 19 || time < 5){
        printf("Good Night");
    }else{
        printf("Invalid Input");
    }

    return 0;
}