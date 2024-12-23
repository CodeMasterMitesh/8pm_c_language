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
    fflush(stdin);
    printf("Enter Book Name :");
    gets(b1.name);
    printf("Enter Book Price :");
    scanf("%f",&b1.price);

    FILE *fp;

    fp = fopen("book2.txt","a+b");
    fwrite(&b1,sizeof(b1),1,fp);
    rewind(fp);
    while(fread(&b1,sizeof(b1),1,fp) > 0){
        printf("%d\n",b1.bookid);
        printf("%s\n",b1.name);
        printf("%.2f\n",b1.price);
    };
    fclose(fp);
    return 0;
}