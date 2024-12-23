#include <stdio.h>
#include<string.h>

int main() {

    char name[20] = "madam";
    char name1[20] = "madam";

    if(name == name1){
        printf("both same\n");
    }else{
        printf("both not same\n");
    }
   
    int l = strlen(name);
    printf("%d",l);
    return 0;
}