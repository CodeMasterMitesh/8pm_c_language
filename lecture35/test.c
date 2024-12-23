#include <stdio.h>
int test(int *c)
{   
  
    int a = 20;
      *c = a;
    
}

int main() {

    int a = 5;
    test(&a);
    printf("%d",a);
    return 0;
}