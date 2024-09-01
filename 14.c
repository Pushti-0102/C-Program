#include<stdio.h>
//Program to check whether a given character is Capital letter, Small letter case ,a digit or a special symbol.
//By using ASCII code.
void main()
{
	//Capital 65 to 90.
	//Small 97 to 122.
	//Symbols 32-47, 58-64, 91-96, 123-126
	//digit 
	
	char a;
	
	printf("Please enter any singal data : ");
	scanf("%c", &a);
	
	printf("ASCII order of given data is : %d \n", a);
	
	if(65<=a&&90>=a)
	{
		printf("Given data is in Capital Letter.");
	}
	else if(97<=a&&122>=a)
	{
		printf("Given data is in Small Letter.");
	}
	else if(32<=a&&47>=a||58<=a&&64>=a||91<=a&&96>=a||123<=a&&126>=a)
	{
		printf("Given data is Special Symbol .");
	}
	else
	{
		printf("Given data is Digit.");
	}

	return 0;
}
