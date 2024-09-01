#include <stdio.h>
/*Earth takes a period of revolution of 31558150 seconds. 
  Write a C program to convert this into number of day, hours and minutes.*/
void main() 
{
	float sec, min, hour, day;
	
	sec=31558150;
	min=sec/60;
	hour=min/60;
	day=hour/24;
	
	printf("There are %f minutes in a year.\n", min);	
	printf("There are %f hours in a year.\n", hour);	
	printf("There are %f days in a year.\n", day);
	
	return 0;
}
