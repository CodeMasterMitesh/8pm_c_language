#include <stdio.h>

int main() {

    FILE *fp;

    fp = fopen("sum.txt","w");

   int a  = 10;
   int b  = 20;
   int c;

    fprintf(fp,"Sum of a%d and b%d is %d",a,b,a+b);
    fclose(fp);

    return 0;
}