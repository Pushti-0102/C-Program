#include<stdio.h>
//Read a number N and print a single digit answer showing sum of digit of N.
int main() {
    
    int i,n,sum=0;

    printf("Enter a number which contain maximum 10 digits :");
    scanf("%d",&n);

    for(i=1000000000; i>0; i/=10)
    {
        sum=n/i + sum;
        n=n%i;
    }

    if(sum>=10) {
        n=sum, sum=0;
        for(i=1000000000; i>0; i/=10)
    {
        sum=n/i + sum;
        n=n%i;
    }


    }

    printf("sum=%d",sum);


    return 0;
}