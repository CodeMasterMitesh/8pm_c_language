#include<stdio.h>

int main()
{   
    int month;

    printf("Enter Month in Number 1 to 12 : ");
    scanf("%d",&month);

    switch (month)
    {
    case 11:
    case 12:
    case 1:
    case 2:
        printf("Season is winter");
        break;

    case 3:
    case 4:
    case 5:
    case 6:
        printf("Season is Summer");
        break;

    case 7:
    case 8:
    case 9:
    case 10:
        printf("Season is Monsoon");
        break;
    
    default:
    printf("Avi Koe Seasion Nathi");
        break;
    }


    return 0;
}