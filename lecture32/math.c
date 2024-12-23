#include <stdio.h>
#include<math.h>

int main() {
    int a = 3;
    int b = 5;
    // pow(base,exponential)
   int result = pow(a,b);
   float r = sqrt(result);
//    int c = ceil(r);
 int f = floor(r);
   printf("%d\n",f);

//    float remi =  fmod(8.5,3.3);
   int remi =  fmod(6,3);

//    printf("%.2f",remi);
   printf("%d\n",remi);

   float ab =  fabs(-5.5);
   printf("%.2f\n",ab);

   double h = hypot(3,4);
   printf("%.2f\n",h);

   float cr = cbrt(27);
   printf("%.2f\n",cr);
    return 0;
}