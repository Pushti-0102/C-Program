#include<stdio.h>
//Program to check a number is palindrom or not.
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
    
    if(rev==y) {
        printf("%d is a palindrom number.",y);
    }
    else{
        printf("Number is not palindrom.");
    }
    



    return 0;
} 
