#include<stdio.h>
//Program to print 2,4,6,8,10,...N.
int main() {

    int n,i;
    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2) {
        printf("%d \t",i);
    }
    
    return 0;
}
