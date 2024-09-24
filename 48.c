#include<stdio.h>
//    1
//   12
//  123
// 1234
int main() {

    int n, i, j, k;

    printf("Enter :");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(k=1; k<=(n-i); k++) {
            printf(" ");
        }
            for(j=1; j<=i; j++) {
                printf("%d",j);
            }
        printf("\n");
    }

    return 0;
}