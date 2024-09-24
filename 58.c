#include<stdio.h>
//Program to read two arrays of 10 integer and store addition of those arrays into third.
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

    printf("Addition of two array elements is : \n");

    for(i=0; i<10; i++) {
        Num3[i] = Num1[i] + Num2[i];
        printf("%d \t",Num3[i]);
    }

    return 0;
}