#include<stdio.h>
//Program to calculategross salary.
void main()
{
	/*gross salary=gs
      base salary=bs
	  house rent allowance=hra*/
	
	float gs, bs, hra;
	
	printf("Enter basic salary : ");
	scanf("%f", &bs);
	
	hra=bs*0.1;
	
	gs=bs+hra;
	
	printf("Gross salary is Rs. :%f ", gs);
	
	return 0;
}
