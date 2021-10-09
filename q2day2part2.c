
#include <stdio.h>
  
int main()
{
    int a, b, c;
  
    printf("Enter the numbers a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
  
    if(a<0 || b<0 || c<0)
        printf("Invalid number in input");

    else 
    {
        if (a >= b && a >= c)
            printf("%d is the largest number.", a);
  
        if (b >= a && b >= c)
            printf("%d is the largest number.", b);
  
        if (c >= a && c >= b)
            printf("%d is the largest number.", c);
    }
    return 0;
}