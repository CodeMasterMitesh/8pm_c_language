#include<stdio.h>

int main()
  {
    int time;
    time=-4;
    if(time>5 && time <12 ){
        printf("Good morning");
    }else if(time > 12 && time < 17 ){
        printf("Good AfterNoon");
    }else if(time > 17 && time < 19){
        printf("Good Noon");
    }else if(time > 19 || (time < 5 && time > 0)){
        printf("Good Night");
    }else if(time < 0){
        printf("Invalid Input");
    }else if(time > 24){
        printf("Invalid Input");
    }else{
        printf("Invalid Input");   
    }
    return 0;
    }