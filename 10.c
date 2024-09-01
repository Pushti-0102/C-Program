#include<stdio.h>
/*Write a program to calculate the cut off marks of a student using the formula.
  CM= M/2 + P/2 + C/2 + E
  Where, CM = Cut of MArk
         M  = Marks in Maths out of 200. 
         P  = Marks in Physics out of 200.
         C  = Marks in Chemistry out of 200.
         E  = Marks in entrance examination out of 100.
*/
void main()
{
	int cm, m, p, c, e;
	
	printf("Enter your marks in maths out of 200. ");
	scanf("%d", &m);
	
	printf("Enter your marks in Phyics out of 200. ");
	scanf("%d", &p);
	
	printf("Enter your marks in Chemistry out of 200. ");
	scanf("%d", &c);
	
	printf("Enter your marks in EE out of 100. ");
	scanf("%d", &e);
	
	cm = m/2 +c/2 +p/2+ e;
	
	printf("Your cut off marks is %d", cm);
	return 0;
}
