#include <stdio.h>
// binary ma write  inside file
// binary ma read in my structure variable 

typedef struct{
    int bookid;
    char name[20];
    float price;
}Book;
int main() {
    Book b1;

    FILE *fp;

    fp = fopen("book3.txt","a+b");

    printf("Enter Book ID :");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    printf("Enter Book Name :");
    gets(b1.name);
    printf("Enter Book Price :");
    scanf("%f",&b1.price);

    fwrite(&b1,sizeof(b1),1,fp);

    rewind(fp);

    while (fread(&b1,sizeof(b1),1,fp) > 0)
    {
        printf("Book Data\n");
        printf("Book Id is %d\n",b1.bookid);
        printf("Book Name is %s\n",b1.name);
        printf("Book Price is %.2f\n",b1.price);
    }
    fclose(fp);

    return 0;
}