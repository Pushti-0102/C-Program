#include <stdio.h>
//Program to read marks of five subject and print division.
void main()
{
	int a, b, c, d, e, sum;
 	printf("Enter your Maths marks : ");
 	scanf("%d", &a);
 	printf("Enter your Science marks : ");
 	scanf("%d", &b);
 	printf("Enter your English marks : ");
 	scanf("%d", &c);
 	printf("Enter your Social Studies marks : ");
 	scanf("%d", &d);	
 	printf("Enter your Hindi marks : ");
 	scanf("%d", &e);
 	
 	sum=a+b+c+d+e;
 	
 	if
 	(sum>=450)
 	printf("Congrats!! \n Your grade is A.");
 	
 	if
 	(sum>=400&&sum<450)
 	printf("Good. \n Your grade is B. ");
 	
 	if 
 	(sum>=350&&sum<400)
 	printf("Your grade is C.");
 	
 	if 
 	(sum<350)
 	printf("Your grade is D.");
 	
 	return 0;
 	
}
