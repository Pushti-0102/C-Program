#include<stdio.h>
//Read a number N and print factor of N.
int main() {

    int n,i;

    printf("Entere a number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        if(n%i==0) {
            printf("%d \t", i);
        }
    }


    return 0;
}
