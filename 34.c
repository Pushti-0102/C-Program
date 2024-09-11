#include<stdio.h>
//Program to print fibonacci series.

int Fib(int m);

int main() {
    int m,i;
    printf("Enter a term number : ");
    scanf("%d", &m);
    printf("\n 0 \t 1 \t");
    for(i=2; i<=m; i++) {
        printf("%d \t",Fib(i));
    }
    return 0;
}

int Fib(int m) {
    if(m==0) {
        return 0;
    }
    if (m==1) {
        return 1;
    }
    int fibm1=Fib(m-1);
    int fibm2=Fib(m-2);
    int fib = fibm1 + fibm2;
    return fib; 
}