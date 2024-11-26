 #include<stdio.h>
// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUBERS.TEST THE FUNCTION FOR N=5,10,AND 15. 

int fib(int m);

int main() {
    int n;
    printf("Enter number of term : ");
    scanf("%d", &n);
    printf("0\t1\t");
    for(int i=2; i<=n; i++) {
        printf("%d\t", fib(i));
    }
    return 0;
}

int fib(int m) {
    if(m==0) {
        return 0;
    }
    if(m==1) {
        return 1;
    }
    int fibnm1=fib(m-1);
    int fibnm2=fib(m-2);
    int fib= fibnm1 + fibnm2;
    return fib;
}
