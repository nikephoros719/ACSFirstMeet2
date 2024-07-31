#include <stdio.h>

int main() {
  int matrix[3][3] = {};
    int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  int max; 
  max = matrix[0][0];
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
        if (matrix[i][j] > max)
    {
        max = matrix[i][j];
    }
    }
    
  }
  
   printf("The maximum value in the matrix is:  %d", max);

  return 0;
}