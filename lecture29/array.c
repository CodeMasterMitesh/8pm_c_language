#include <stdio.h>

int main() {
    // index array
                //0 1 2 3 4 5 6 7 8 9 
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = num;
    int n = 9;
    for (int i = 0; i <= n; i++){
        b[i] = num[i];
         printf("%d\n",b[i]);
    }
   
    
    // int a = 10;
    // printf("%d\n",num[0]);
    // printf("%d\n",num[1]);
    // printf("%d\n",num[2]);
    // printf("%d\n",num[3]);
    // printf("%d\n",num[4]);
    // printf("%d\n",num[5]);
    // printf("%d\n",num[6]);
    // printf("%d\n",num[7]);
    // printf("%d\n",num[8]);
    // printf("%d\n",num[9]);
    return 0;
}