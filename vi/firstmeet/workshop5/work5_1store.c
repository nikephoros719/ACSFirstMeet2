#include <stdio.h>

int main() {
  int mn[5] ;
  int i ;
  int a = 0;
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &mn[i]);
   a+=mn[i];

  }
    printf("Sum of entered numbers: %d\n",a);

printf("Numbers in array: ");

    for (i = 0; i < 5; i++)
  {
    printf("%d ",mn[i]);
  }
 
  return 0; 
  }