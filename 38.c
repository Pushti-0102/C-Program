#include<stdio.h>
//Program to print 1,4,9,16,25,........N.
int main() {

    int n,i;
    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        printf("%d \t",i*i);
    }
    
    return 0;
}
