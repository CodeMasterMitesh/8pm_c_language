#include <stdio.h>

int main() {
             
    int num = 1;
     // while loop
    // initialization
    //  while(num <= 10)
    //  // loop body
    //  {
    //     printf("%d - Hello World\n",num);
    //     num++;
    //     // ++,--
    //     // increment / decrement
    //  }   

    // do while loops
    // do{
    //     printf("%d - Hello World\n",num);
    //     num++;
    // }while(num <= 10);


    // for loops

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
           printf("%d - This Is My Inner Loop\n",j);
        }
        printf("%d - This Is My Outer Loop\n", i);
        
    }
    
    

    return 0;
}