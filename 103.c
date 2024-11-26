//WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBER. 
#include<stdio.h>
#define max(a,b) ( (a>b) ? a : b )

int main() {
    int a, b;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    printf("Bigger is : %d", max(a,b));
    return 0;
}