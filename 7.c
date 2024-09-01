#include <stdio.h>
//Program to calcute area of a triangle.
void main()
{
	float h, b, Area;
	
	printf("Enter the hight of a triangle :");
	scanf("%f", &h);
	
	printf("Enter the base of a triangle :");
	scanf("%f", &b);
	
	Area=0.5*h*b;
	
	printf("Area of the triangle is : %f", Area);
	
	return 0;
}
