#include <stdio.h>
//Program to check whether a no. is even or odd.
void main()
{
	int n;
	
	printf("Enter a number : \n");
	scanf("%d", &n);
	
	if(n%2==0) 
	{
		printf("The given no. is even.");
	}
	
	
	else
	{
		printf("The given no. is odd. "); 
	}	
	
	return 0;
	
}
