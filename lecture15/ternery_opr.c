#include<stdio.h>
// ternaory operators ? :
// expresion 

// ex.
int main()
{
    int age;
    printf("Enter Your Age :");
    scanf("%d",&age);

    int ans = (age > 18) ? 0 : -1;

    printf("%d",ans);

    return 0;
}