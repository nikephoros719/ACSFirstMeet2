#include <stdio.h>

int main() {
   int y ;

   scanf("%d", &y);
   if ((y%4 == 0 && y%100 != 0) || y%400 == 0)
   {
    printf("%d is a leap year. February has 29 days.", y);
    
   }
   else
   {
    printf("%d is a leap year. February has 28 days.", y);

   }
return 0;
}