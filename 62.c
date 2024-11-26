#include<stdio.h>
//Program to reverse an array.

int main() {

    int t, i, Num[10];
    
    printf("Enter 10 elements of array : \n");
    for(i=0; i<10; i++) {
        scanf("%d", &Num[i]);
    }

    for(i=0; i<5; i++) {
        t=Num[i];
        Num[i]=Num[9-i];
        Num[9-i]=t;
    }

    printf("After reverse the elements :\n ");
    for (i=0; i<10; i++) {
        printf("%d\t", Num[i]);
    }

    return 0;
}
