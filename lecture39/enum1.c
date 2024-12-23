#include <stdio.h>

enum Bool {
    false,true
};

int getDaysInMonth(enum Month month){
    switch (month)
    {
        case jan:return 31;
        case feb:return 28;
        case march:return 31;
        case april:return 30;
        case may:return 31;
        case jun:return 30;
        case july:return 31;
        case aug:return 31;
        case sep:return 30;
        case oct:return 31;
        case nov:return 30;
        case dec:return 31;
        default:return -1;
    }
}

int main() {
    
    enum Month selectMonth;
    int input;
    printf("Enter Month (1 for Jan and 2 for feb etc..) :");
    scanf("%d",&input);

    if(input < 1 || input > 12){
        printf("Inavlid Month");
    }else{
        selectMonth = (enum Month)input;

       int r = getDaysInMonth(selectMonth);

       printf("Days for this %d is %d",input,r);
    }


    return 0;
}