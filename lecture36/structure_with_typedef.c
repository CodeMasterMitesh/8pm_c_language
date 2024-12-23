#include <stdio.h>
#include<string.h>
// structure in structure
typedef float p;
typedef struct 
{
    char name[50];
}Customer;

typedef struct 
{
    int bookid;
    char name[20];
    float price;
    Customer a1;
}Book;



int main() {
    // p a = 10.10;
    // printf("%f",a);
    Book b1;
    // struct Book b2;
    printf("Enter Customer Name:");
    gets(b1.a1.name);
    printf("Enter Book Id:");
    scanf("%d",&b1.bookid);
    printf("Enter Book Name:");
    fflush(stdin);
    gets(b1.name);
    printf("Enter Book Price:");
    scanf("%f",&b1.price);
    

    printf("name = %s\n",b1.a1.name);
    printf("bookid = %d\n",b1.bookid);
    printf("name = %s\n",b1.name);
    printf("price = %.2f\n",b1.price);

    return 0;
}