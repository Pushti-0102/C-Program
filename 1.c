#include <stdio.h>
int main()
// Programme to calculate simple interest. 

{
	float p, r, n, interest;
	
	printf("Enter the intional amount : ");
	scanf("%f", &p);
	
	printf("Enter the rate of interest : ");
	scanf("%f", &r);
	
	printf("Enter the time : ");
	scanf("%f", &n);
	
	interest = p*r*n/100;
	
	printf("Interest of given data is : %f", interest);
	
	return 0;
	
}

