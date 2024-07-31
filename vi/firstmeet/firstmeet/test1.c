#include <stdio.h>

int main() 
{
    int arr[4] = {}, i=0, sum=0;
    for ( i = 0; i < 4 ; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    printf("%d", sum);
 return 0; 
}