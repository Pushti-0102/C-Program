#include<stdio.h>
// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
int check(int num);

int main() {
    printf("Enter a number : \n");
    int num;
    scanf("%d", &num);
    if(check(num)==0) {
        printf("Not Polindrom number...");
    }
    else {
        printf("Polindrom number...");
    }
    return 0;
}

int check(int num) {
    int rem=0,rev=0,a;
    a=num;
    while(a!=0) {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    return (rev==num);
}