#include <stdio.h>
// pointer with array
int main() {
             
    // int arr[5] = {1,2,3,4,5};
    int arr[5];
    int sz = sizeof(arr) / sizeof(int);
    // printf("%d",sz);
    int *ptr = &arr[0]; // &arr[i]

    // store data in array with pointer
    for (int i = 0; i < sz; i++)
    {
        printf("enter value :");
        scanf("%d",ptr + i);
    }
    
    // print array with pointer
    for (int i = 0; i < sz; i++)
    {
        printf("array data %d\n",(ptr + i));
    }
    
    return 0;
}