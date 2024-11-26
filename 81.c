#include<stdio.h>
// WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN 
// ZERO OTHERWISE.
int prime(int n);

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d", prime(n));
    return 0;
}

int prime(int n) {
    int count=0;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            count++;
        }
    }
    return(count==0);
}