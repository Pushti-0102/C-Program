#include<stdio.h>
//Program to read seconds and convert it into the time.
void main()
{
	int sec, h, m, s;
	
	printf("Enter the time only in seconds : ");
	scanf("%d", &sec);
	
	h=sec/3600;
	m=sec%3600;
	m=m/60;
	s=sec-3600*h-60*m;
	printf("Time is : %dhour %dmin %dsec", h, m, s);
		
	return 0;
}
