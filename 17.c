#include<stdio.h>
//Program to read three no. and print max using logical operator(&&).
void main()
{
	int a, b, c;
	
	printf("Enter different three numbers :");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>b&&a>c)
	{
		printf("Greatest no. is %d", a);
	}
	else if(b>c)
	{
		printf("Greatest no. is %d", b);
	}
	else
	{
		printf("Greatest no. is %d", c);
	}
	
	return 0;
}
