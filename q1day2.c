#include <stdio.h>

int main()
{
    unsigned int age;

    printf("Enter your age=");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("User is eligible to vote");
    }
    else
    {
        printf("User is not eligible to vote");
    }
  return 0;
}