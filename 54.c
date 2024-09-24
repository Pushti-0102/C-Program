#include<stdio.h>
//Program to read an Arry of 10 integer and print sum of numbers.
int main() {

    int i,Num[10],sum=0;
    printf("Enter the elements of an Arry : \n");

    for(i=0; i<10; i++) {
        scanf("%d", &Num[i]);
        sum=sum+Num[i];
    }

    printf("Sum of all arry elements is : %d", sum);

    return 0;
}