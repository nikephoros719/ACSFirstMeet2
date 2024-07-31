#include <stdio.h>

int main() {
    int a, b ;

    scanf("%d", &a);
    scanf("%d", &b);
    int result = a / b ;
    int r = a%b;

    printf("%d,%d", result, r);
return 0;
  
}