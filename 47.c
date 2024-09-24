#include<stdio.h>
    // A
    // AB
    // ABC
    // ABCD
int main() {

    int a,i,j;
    char n;

    printf("Enter :");
    scanf("%d",&a);

    for(i=1; i<=a; i++) {
        for(j=1; j<=i; j++) {
            n=j+64;
            printf("%c",n);
        }
        printf("\n");
    }

    return 0;
}