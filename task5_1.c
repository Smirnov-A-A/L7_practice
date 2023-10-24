#include <stdio.h>

int main() {

   for (int x = 35; x <= 87; ++x) {
      if (x % 7 == 1 || x % 7 == 2 || x % 7 == 5)
      printf("%d, ", x);
   }
   printf("\n");
   return 0;
}
