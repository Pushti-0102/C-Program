#include<stdio.h>
// Write a program in C to rotate an array by N positions. 
int main() {

    int num[10]={1,2,3,4,5,6,7,8,9,10}, Num[10], i, n, j;
    
    printf("Enter nth position : ");
    scanf("%d", &n);

    for(i=0; i<=10-n; i++) {
        Num[i]=num[i+n-1];
    }
    for(i=11-n,j=0; i<10; i++,j++) {
        Num[i]=num[j];
    }

    for(i=0; i<10; i++) {
        printf("%d \t", Num[i]);
    }

    return 0;
}