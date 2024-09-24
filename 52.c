#include<stdio.h>
//    1
//   121
//  12321
// 1234321
int main() { 

    int n,i,j;
    printf("Enter : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        for(j=i; j<n; j++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("%d", j);
        }
        for(j=1; j<i; j++) {
            printf("%d",i-j);
        }
        printf("\n");
    }

    return 0;
}