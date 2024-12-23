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

    fp = fopen("book.txt","rb");

    int e = fread(&b1,sizeof(b1),1,fp);

    printf("%d\n",e);

    printf("Book Data");
    printf("Book ID is : %d\n",b1.bookid);
    printf("Book Name is : %s\n",b1.name);
    printf("Book Price :%.2f\n",b1.price);

    
    printf("%d\n",e);

    fclose(fp);

    return 0;
}