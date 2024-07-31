#include <stdio.h>
int main() {
    int s ;
    scanf("%d", &s);
    if (s >= 80)
    {
        printf("Grade :A");
        
    }
    else if (s >= 75)
    {
        printf("Grade :B+");
    }
   else if (s >= 70)
    {
        printf("Grade :B");
    }
    else if (s >= 65)
    {
        printf("Grade :C+");
    }
    else if (s >= 60)
    {
        printf("Grade :C");
    }
    else if (s >= 55)
    {
        printf("Grade :D+");
    }
    else if (s >= 50)
    {
        printf("Grade :D");
    }
    else
    {
        printf("Grade :F");
    }
    return 0;
}
