#include<stdio.h>

int main() {
	int age;

	printf("Enter your age\n");
	scanf("%d", &age);

	(age >= 18) ? printf("Yes, you are eligible for voting!") : printf("You, you are not eligible for voting!");

	return 0;
}