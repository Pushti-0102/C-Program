#include<stdio.h>
//Program to read two arrays of 10 integer and swap values these arrays.
int main() {

    int i, Num1[10], Num2[10], Num3[10], sum;
    
    printf("Enter 10 elements of first array : \n");
    for(i=0; i<10; i++) {
        scanf("%d", &Num1[i]);
    }

    printf("Enter 10 elements of second array : \n");
    for(i=0; i<10; i++) {
        scanf("%d", &Num2[i]);
    }

    printf("After swaping.........\n");

    for(i=0; i<10; i++) {
        Num3[i]=Num1[i];
        Num1[i]=Num2[i];
        Num2[i]=Num3[i];
    }

    printf("First array elements are :\n");
    for(i=0; i<10; i++) {
        printf("%d\t", Num1[i]);
    }

    printf("\nSecond array elements are :\n");
    for(i=0; i<10; i++) {
        printf("%d\t", Num2[i]);
    }

    return 0;
}