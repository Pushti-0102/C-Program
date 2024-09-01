#include<stdio.h>
//Program to read a character and check whether it is a small case letter or not using condational operator.
void main()
{
	char l;
	printf("Enter a character :");
	scanf("%c", &l);
	
	l<='z'&&l>='a' ? printf("small") : printf("capital");
	
	
	return 0;
}
