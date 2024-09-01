#include <stdio.h>
//Program to swap two variables without using third variable.
void main()
{
	int a, b;
	
	a=20;
	b=10;
	printf("The value of a is : %d \n" , a);
	printf("The value of b is : %d \n" , b);
	
	a=a*b; //a=200
	b=a/b; //b=20
	a=a/b; //a=10
	
	printf("After swaping....\n");
	
	printf("The value of a is : %d \n" , a);
	printf("The value of b is : %d \n" , b);
	
	return 0;
}

