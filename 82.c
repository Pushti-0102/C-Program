#include<stdio.h>
// WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. 
// NCR = (N!/(R!*(N-R)!));
int ncr(int n, int r) ;

int main(){
    int n, r;
    printf("Enter the value of n and r :");
    scanf("%d %d", &n, &r);
    printf("%d", ncr(n,r));
    return 0;
}

int ncr(int n, int r) {
    int fxn=1;
    for(int i=n,j=1; i>n-r,j<=r; i--,j++) {
        fxn*=i;
        fxn/=j;
    }
    return fxn;
}

