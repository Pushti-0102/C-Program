#include <stdio.h>
//Program to read time in hour,min,sec and convert into total seconds.
void main()
{
	int h, m, s, sec;
	
	printf("Enter the time in this formate : hour(press enter) min(press enter) sec(press enter) \n");
	scanf("%d %d %d", &h, &m, &s);
	
	sec=h*60*60;
	sec=sec+(m*60);
	sec=sec+s;
	
	printf("Total seconds in given time is : %d", sec);
	
	return 0;
} 
