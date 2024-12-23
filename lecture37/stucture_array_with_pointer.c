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
    Book *ptr = b1;
    int n = 3;
    // ptr[0] == b1[0]
    // &b1[0] == &ptr[0]
    // store data using loop
    for (int i = 0; i < n; i++)
    {
        printf("Enetr Book ID:");
        scanf("%d",&ptr[i].bookid);
        printf("Enetr Book Name:");
        getchar();
        gets(ptr[i].name);
        printf("Enetr Book Price:");
        scanf("%f",&ptr[i].price);
    }
    
    // print data using loop
    for (int i = 0; i < n; i++)
    {
        printf("Book %d Details \n",i + 1);
        printf("Book ID = %d\n",ptr[i].bookid);
        printf("Book Name = %s\n",ptr[i].name);
        printf("Book Price = %.2f\n",ptr[i].price);
    }
    
    return 0;
}