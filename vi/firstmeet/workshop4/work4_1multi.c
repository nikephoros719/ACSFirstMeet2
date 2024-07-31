#include <stdio.h>

int main() {
  int i;
  int num;
  scanf("%d", &num);


  for (i = 1; i < 13; i++) {
      int ans = num*i ;
    printf("%d * %d = %d\n",num, i, ans);
  }
  
  return 0;
}