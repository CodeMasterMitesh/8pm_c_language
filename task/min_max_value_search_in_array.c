#include <stdio.h>
// search in array min value
int main() {
    
    int arr[9] = {2,3,5,1,6,9,16,15,-1};

    int min = arr[0];
    int max = arr[0];

    int sz = sizeof(arr) / sizeof(int);

    for (int i = 0; i < 9; i++)
    {
        if(arr[i] < min ){
             min = arr[i];
        }

        if(arr[i] > max ){
             max = arr[i];
        }
    }
    printf("%d\n",min);
    printf("%d\n",max);

    return 0;
}