#include<stdio.h>
// Program to read three number and print maximum number using conditional operator.
int main()  {
    
    int a,b,c,max;
    
    printf("Enter three different number :\n ");
    scanf("%d%d%d",&a,&b,&c);

    max=(a>b&&a>c) ? (a) : ((b>c) ? (b) : (c));

    printf("Maximaum number is : %d.",max);

    return 0;
}
