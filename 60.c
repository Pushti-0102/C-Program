#include<stdio.h>
//Program to sort (selection sort) an array.
int main() {

    int i, j, temp=0, min;
    int num[5];
    printf("Enter 5 numbers : \n");

    for(i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i<5; i++) {
        min=i;
        for(j=i+1; j<5; j++) {
            if(num[j]<num[i]) {
                min=j;
            }
            temp=num[min];
            num[min]=num[i];
            num[i]=temp;
        }
    }
  
    printf("Selection sort.....\n");
    for(i=0; i<5; i++) {
        printf("%d\t",num[i]);
    }

    return 0;
}