#include <stdio.h>

typedef struct{
    int bookid;
    char name[20];
    float price;
}Book;
int main() {
    Book b1;

    FILE *fp;

    fp = fopen("book4.txt","a");

    printf("Enter Book ID :");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    printf("Enter Book Name :");
    gets(b1.name);
    printf("Enter Book Price :");
    scanf("%f",&b1.price);

    // printf("Hello world %d)
    // fprintf(fp,"Book ID ");
    // fprintf(fp,"Book Name ");
    // fprintf(fp,"Book Price\n");
    fprintf(fp,"%d    \n",b1.bookid);
    fprintf(fp,"%s    ",b1.name);
    fprintf(fp,"%.2f",b1.price);
    fclose(fp);

    return 0;
}