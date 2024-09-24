#include<stdio.h>
// 1000
// 0100
// 0010
// 0001
int main() {
    
    int n,i,j,num[100];
    printf("Enter : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            (i==j) ? printf("1") : printf("0");
        }
        printf("\n");
    }

    return 0;
}