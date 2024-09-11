#include<stdio.h>
//Program to print sum of individual digits of a 'n' digit no.
int main() {

    int i,n,sum=0;

    printf("Enter a number which contain maximum 10 digits :");
    scanf("%d",&n);

    for(i=1000000000;i>=1; i/=10)
    {
        sum=n/i + sum;
        n=n%i;
    }

    printf("sum=%d",sum);

    return 0;
}