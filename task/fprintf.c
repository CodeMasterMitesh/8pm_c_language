#include <stdio.h>
typedef struct {
    int bookid;
    char name[20];
    float price;
}Book;
int main() {
    Book b1;

    printf("Enter Book Id :");
    scanf("%d",&b1.bookid);

    printf("Enter Name :");
    fflush(stdin);
    gets(b1.name);

    printf("Enter Price :");
    scanf("%f",&b1.price);
    
    FILE *fp;
    fp = fopen("text.txt","a+");

    fprintf(fp,"Book ID Is %d\n",b1.bookid);
    fprintf(fp,"Book Name Is %s\n",b1.name);
    fprintf(fp,"Book Price Is %d\n",b1.price);


    
    fclose(fp);
    return 0;
}