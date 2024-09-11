#include<stdio.h>
//Program to print 1/1! + 2/2! + 3/3! +.......N.
int main() {

    int n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("1/1!");

    for(i=2; i<=n; i++) {
        printf(" + %d/%d! ",i,i);
    }

    return 0;
}
