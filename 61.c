#include<stdio.h>
//Program to sort(Bubble sort) an array.
int main() {

    int i, j, temp=0, num[10];
    printf("Enter 10 numbers : \n");

    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            if(num[j] > num[j+1]) {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("BUbble sort.....\n");
    for(i=0; i<10; i++) {
        printf("%d\t",num[i]);
    }

    return 0;
}
