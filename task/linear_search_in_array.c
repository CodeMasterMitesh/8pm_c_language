#include <stdio.h>
// search 9 in array and return index number of 9 using loop
int main() {
    
    int arr[7] = {1,2,3,5,6,9,10};

    int target = 9;

    int sz = sizeof(arr) / sizeof(int);

    for (int i = 0; i < sz; i++)
    {
        if(arr[i] == target){
            printf("index of %d = %d",arr[i],i);
        }
    }
    // printf("%d",sz);

    return 0;
}