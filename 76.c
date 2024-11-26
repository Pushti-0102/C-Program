#include<stdio.h>
// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

int check(int num);

int main() {
    printf("Enter a number : \n");
    int num;
    scanf("%d", &num);
    if(check(num)==0) {
        printf("Odd number...");
    }
    else {
        printf("Even number...");
    }
    return 0;
}

int check(int num) {
    return (num%2==0);
}