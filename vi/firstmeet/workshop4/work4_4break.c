#include <stdio.h>

int main() {
  int i, a;
  int b = 0;
  
  for (i = 1; i < 11; i++) {
    scanf("%d\n", &a);
    b = b+a;
    
    if (a == 0 || a<0)
    {
     break;
    }

  }
   printf("%d",b);
  return 0;
}