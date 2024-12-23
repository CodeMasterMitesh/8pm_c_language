#include <stdio.h>
#include <string.h>
typedef struct {
    int bookid;
    char name[20];
    float price;
}Book;
int main() {

    FILE *fp;

    Book b1;

    fp = fopen("book.txt","wb");

    printf("Enter Book ID:");
    scanf("%d",&b1.bookid);

    printf("Enter Book Name :");
    fflush(stdin);
    gets(b1.name);

    printf("Enter Book Price:");
    scanf("%f",&b1.price);
    
    fwrite(&b1,sizeof(b1),1,fp);

    fclose(fp);

    return 0;
}