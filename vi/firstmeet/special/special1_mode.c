#include <stdio.h>

int main() {
  int ar[10], arr[10], i, j ;

   for (i=0; i<10; i++)
  {
    scanf("%d", &arr[i]);
  }
    for ( i = 0; i < 10; i++)
    {
         if (arr[i] == arr[i+1])
            {
                ar[i] += 1;
                
            }
        
    }
    

  return 0; 
  }