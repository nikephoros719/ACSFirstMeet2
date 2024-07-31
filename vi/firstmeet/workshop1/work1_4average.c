#include <stdio.h>

int main() {
    float a, b, c ;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float result = (a+b+c)/3 ;

    printf("%.2f", result);
return 0;
}