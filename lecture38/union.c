#include <stdio.h>
// union example
typedef union 
{
    char c;
    float b;
    float f;
}Book;

int main() {
    
    Book c1;
    c1.f = 35.25;
    c1.b = 20.25;
    c1.c = 'M';
    
    printf("Size of ci.a %d\n",sizeof(c1.f));
    printf("Size of ci.b %d\n",sizeof(c1.b));
    printf("Size of ci.c %d\n",sizeof(c1.c));

    // printf("%d\n",c1.a);
    // printf("%.2f\n",c1.b);
    // printf("%c\n",c1.c);
    printf("%c\n",c1.c);
    printf("%.2f\n",c1.b);
    printf("%.2f\n",c1.b);
    printf("%c\n",c1.c);
    printf("%.2f\n",c1.b);
    // printf("%.2f\n",c1.b);
    
    // printf("%d\n",c1.a);

    return 0;
}