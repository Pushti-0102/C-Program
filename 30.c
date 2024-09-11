#include<stdio.h>
//Program to reverse of a given number.
int main() {
    int rem=0,rev=0,a,y;

    printf("Enter a value :");
    scanf("%d", &a);

    y=a;

    while(a!=0) {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    
    printf("%d",rev);
    return 0;
} 
