#include <stdio.h>

int main() {
    // initilzation
    int num[10];
    int n = 9;
    // store data in array
    for (int i = 0; i <= n; i++)
    {
        printf("Enter Value for %d :",i);
        scanf("%d",&num[i]);
    }
    // print data of num array
    for (int j = 0; j <= n; j++)
    {
        printf("Num Array Data in index of %d = %d:\n",j,num[j]);
    }
    return 0;
}