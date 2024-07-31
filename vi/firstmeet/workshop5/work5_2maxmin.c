#include <stdio.h>

int main() {
  int mn[10] ;
  int i,max,min ;
  
  for (i=0; i<10; i++)
  {
    scanf("%d", &mn[i]);
  }
  
 max = mn[0];
 min = mn[0];
 
 for (i=0; i<10; i++)
    {
     if(mn[i] > max){
         max = mn[i];
    }
     if(mn[i] < min)
    {
         min = mn[i];
     }
 }
  printf("Maximum number: %d\n", max);
  printf("Minimum number: %d", min);
  
  return 0; 
  }