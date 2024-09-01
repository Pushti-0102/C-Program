#include <stdio.h>
//Program to swap two variables using third variable.
void main()
{
	int a, b, c;
	
	a=10;
	b=20;
	
	printf("The value of a is : %d \n" , a);
	printf("The value of b is : %d \n" , b );
	
	c=a; //c=10, a=empty
	a=b; //a=20, b=empty
	b=c; //b=10, c=empty
	
	printf("After swaping....\n");
	
	printf("The value of a is : %d \n" , a );
	printf("The value of b is : %d", b);
	
	return 0;
}
