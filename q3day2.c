#include <stdio.h>
 
int main()
{
	char Operator;
	int num1, num2, result = 0;
	
	printf("\n Please Enter an Operator (+, -, *, /, %%)  :  ");
  	scanf("%c", &Operator);
  	
	printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
  	scanf("%d %d", &num1, &num2);
	
  	switch(Operator)
  	{
  		case '+':
  			result = num1 + num2;
  			break;
  		case '-':
  			result = num1 - num2;
  			break;  			
  		case '*':
		  	if(num1<0 || num2<0)
        		printf("One of the number is zero, so multiplication will be zero");
			else
				result = num1 * num2;
  				break;
  		case '/':
		  	if(num1<0 || num2<0)
            	printf("One of the number is less than zero, so quotient will be not defined");
  			else
			  	result = num1 / num2;
  				break;
        case '%':
            result = num1 % num2;
						    			
	}
  
	printf("\n The result of %d %c %d  = %d", num1, Operator, num2, result);
	
  	return 0;
}