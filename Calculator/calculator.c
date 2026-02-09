#include <stdio.h>

int main( )
{
	
	//CALCULATOR PROGRAM
	
	char operator;
	double num1;
	double num2;
	double result;
	
	printf("Enter the first number: ");
	scanf("%lf", &num1);
	
	printf("Enter operator (+  -  *  /): ");
	scanf(" %c", &operator);
	
	printf("Enter second number: ");
	scanf("%lf", &num2);
	
	switch(operator)
	{
		case '+': 
		result = num1 + num2;
		break;
		case '-': 
		result = num1 - num2;
		break;
		case '*': 
		result = num1 * num2;
		break;
		case '/': 
		if(num2 == 0)
		{
			printf("Can't divide by Zero !!\n");
		}
		else{
		result = num1 / num2;
		}
		break;
		default:
		printf("Invalid Operator !!\n");
	}
	printf("%.4lf", result);
	
	return 0;
}
