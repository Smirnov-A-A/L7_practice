#include <stdio.h>

   int main() {

   int res = 1;
   for (int i = 11; i <= 99; i += 2) { 
      if (i % 13 == 0) 
      res *= i;
   }
   printf("res = %d\n", res);
   return 0;
}
