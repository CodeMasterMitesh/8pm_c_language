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
    fp = fopen("myfiles.txt","a+b");

    fwrite(&b1,sizeof(b1),1,fp);
    rewind(fp); // Move file pointer to the beginning
    while (fread(&b1,sizeof(b1),1,fp) > 0)
    {
        printf("Book Details\n");
        printf("Book Id Is %d: \n",b1.bookid);
        printf("Book Name Is %s: \n",b1.name);
        printf("Book Price Is %.2f: \n",b1.price);
    }
    fclose(fp);
    return 0;
}