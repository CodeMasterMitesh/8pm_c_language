#include <stdio.h>
#include<string.h>
// premetive datatype - int , float , double , char
// non premitive array , string
//structure - struct
//union - union
//enumratore - enum
// user define datatype using premetive datatype

struct Book
{
    int bookid;
    char name[20];
    float price;
};

int main() {
    int a = 10;
    struct Book b1;
    struct Book b2;

    printf("Enter Book Id:");
    scanf("%d",&b1.bookid);
    printf("Enter Book Name:");
    fflush(stdin);
    gets(b1.name);
    printf("Enter Book Price:");
    scanf("%f",&b1.price);

    // b1.bookid = 101;
    // strcpy(b1.name,"Harry Potter");
    // b1.price = 25.25;

    // b2.bookid = 102;
    // strcpy(b2.name,"Gandhi Part2");
    // b2.price = 150;

    printf("bookid = %d\n",b1.bookid);
    printf("name = %s\n",b1.name);
    printf("price = %.2f\n",b1.price);

    // printf("bookid = %d\n",b2.bookid);
    // printf("name = %s\n",b2.name);
    // printf("price = %.2f\n",b2.price);

    return 0;
}