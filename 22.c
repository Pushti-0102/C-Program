#include<stdio.h>
//Program to calculate factorial of a number.
int main() {

    int i,n,fact=1;

    printf("Enter a number :\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
     {
        fact=fact*i;
     }

    printf("%d\n",fact);

    printf("End of Program.");

    return 0;
}