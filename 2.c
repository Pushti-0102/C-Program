#include <stdio.h>
 //Program to read marks of five subject of a student and calculate total and percentage.
void main()
 {
 	float a, b, c, d, e;
 	printf("Enter your Maths marks : ");
 	scanf("%f", &a);
 	
 	printf("Enter your Science marks : ");
 	scanf("%f", &b);
 	
 	printf("Enter your English marks : ");
 	scanf("%f", &c);
 	
 	printf("Enter your Social Studies marks : ");
 	scanf("%f", &d);
 	
 	printf("Enter your Hindi marks : ");
 	scanf("%f", &e);
 	
 	printf("Your total marks is : %f \n", a+b+c+d+e);
 	
 	printf("Your Percentage is : %f", 100*(a+b+c+d+e)/500);
 	
 	return 0;
 	
 }
