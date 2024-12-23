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
    int n = 3;
    // store data using loop
    for (int i = 0; i < n; i++)
    {
        printf("Enetr Book ID:");
        scanf("%d",&b1[i].bookid);
        printf("Enetr Book Name:");
        getchar();
        gets(b1[i].name);
        printf("Enetr Book Price:");
        scanf("%f",&b1[i].price);
    }
    
    // print data using loop
    for (int i = 0; i < n; i++)
    {
        printf("Book %d Details \n",i + 1);
        printf("Book ID = %d\n",b1[i].bookid);
        printf("Book Name = %s\n",b1[i].name);
        printf("Book Price = %.2f\n",b1[i].price);
    }
    
    return 0;
}