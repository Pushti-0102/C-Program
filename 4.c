#include <stdio.h>
//Program to convert temperature from Fahrenheit to Centigrade degrees.
void main()
{
	float c, f;
	
	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f", &f);
	
	c = (f-32)*5/9;
	
	printf("%f Fahrenheit = %f Calsius", f, c);
	
	return 0;
}
