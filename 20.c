#include<stdio.h>
//Program which will work like a simple calculator using Switch-Case.
void main()
{
	int a, b;
	char Calculation;
	
	printf("Enter process for calculation :");
	scanf("%c", &Calculation);
	
	printf("Enter two digits : ");
	scanf("%d%d", &a, &b);
	
	
	switch (Calculation)
	{
		case '+':
		printf("Addition of a & b is %d", a+b);
		break;
		
		case '-':
		printf("Substration of a & b is %d", a-b);
		break;
		
		case '*':
		printf("Multiplication of a & b is %d", a*b);
		break;
		
		default : 
		printf("You had entered wrong process.");
	}
	return 0;
}
