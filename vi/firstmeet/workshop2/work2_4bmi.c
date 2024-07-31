#include <stdio.h>

int main() {
   int w ;
   float h ;

   scanf("%d", &w);
   scanf("%f", &h);
   float bmi = w/(h*h);
if (bmi < 18.5 )
{
   printf("Your BMI is %0.2f\nYou are underweight.", bmi);
}
else if (bmi > 18.5 && bmi < 24.9)
{
     printf("Your BMI is %0.2f\nYou are normal weight.", bmi);
}
else if (bmi > 24.9 && bmi < 29.9)
{
    printf("Your BMI is %0.2f\nYou are overweight.", bmi);
}
else
{
   printf("Your BMI is %0.2f\nYou are obese.", bmi);
}


return 0;
}