#include<stdio.h>
//Program to print 1,3,5,7,.....N.
int main() {
    
    int n,i;
    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2) {
        printf("%d \t",i);
    }
    return 0;
}
