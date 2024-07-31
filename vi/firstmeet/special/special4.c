#include <stdio.h>

int main(){
    float w , h, b, r;
    int choice;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
       printf("Enter the width: ");
       scanf("%f", &w);
       printf("Enter the height: ");
       scanf("%f", &h);
       float rec = w*h; 
       if (w < 0 || h < 0)
       {
        printf("The area of the rectangle is: Error");
       }
       else
       {
        printf("The area of the rectangle is: %0.2f", rec);
       }
    }
    else if (choice == 2)
    {
        printf("Enter the base: ");
       scanf("%f", &b);
       printf("Enter the height: ");
       scanf("%f", &h);
       float rec = (b*h)/2; 
       if (b < 0 || h < 0)
       {
        printf("The area of the triangle is: Error");
       }
       else
       {
        printf("The area of the triangle is: %0.2f", rec);
       }
    }
    else if (choice == 3)
    {
        printf("Enter the radius: ");
       scanf("%f", &r);
       float rec = (3.14*r*r); 
       if (r < 0)
       {
        printf("The area of the circle is: Error");
       }
       else
       {
        printf("The area of the circle is: %0.2f", rec);
       }
    }
    
    else
    {
        printf("Invalid choice");
    }
    
    

    return 0;
}