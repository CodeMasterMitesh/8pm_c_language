#include <stdio.h>
#include <string.h>
typedef struct
{
    int bookid;
    char name[20];
    float price;
}Book;


int main() {
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    Book b1[3];
    b1[0].bookid = 101;
    strcpy(b1[0].name,"Harry Potter");
    b1[0].price = 25.25;

    b1[1].bookid = 102;
    strcpy(b1[1].name,"James Bond");
    b1[1].price = 125.35;

    b1[2].bookid = 103;
    strcpy(b1[2].name,"Tom And Jerry");
    b1[2].price = 255.25;

    printf("Book ID = %d\n",b1[0].bookid);
    printf("Book Name = %s\n",b1[0].name);
    printf("Book Price = %.2f\n",b1[0].price);

    printf("Book ID = %d\n",b1[1].bookid);
    printf("Book Name = %s\n",b1[1].name);
    printf("Book Price = %.2f\n",b1[1].price);

    printf("Book ID = %d\n",b1[2].bookid);
    printf("Book Name = %s\n",b1[2].name);
    printf("Book Price = %.2f\n",b1[2].price);
    return 0;
}