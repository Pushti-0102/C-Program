#include<stdio.h>
//Program to read two numbers and perform a specific task (using arthmetic operators) and this perform using switch case(case in char form). 
int main() {

    int a, b;
	char task;

	printf("Enter process for calculation :\n Addition : a \n Substraction : s \n Multyplication : m \n");
	scanf("%c", &task);

	printf("Enter two digits : ");
	scanf("%d%d", &a, &b);


	switch (task)
	{
		case 'a':
		printf("Addition of a & b is %d.", a+b);
		break;

		case 's':
		printf("Substration of a & b is %d.", a-b);
		break;

		case 'm':
		printf("Multiplication of a & b is %d.", a*b);
		break;

		default : 
		printf("Sorry! This process is not available in our system.");
	}


    return 0;
}
