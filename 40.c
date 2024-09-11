#include<stdio.h>
//Read numbers till a negative number is entered and calculate sum of a list of numbers read.
int main() {
    int sum=0,i,Arr[100];
    printf("Enter numbers : ");
    for(i=0; i>=0; i++) {
        scanf("%d",&Arr[i]);
        if(Arr[i]<0) {
            break;
        }
        sum=sum + Arr[i];
    }

    printf("Sum of numbers : %d", sum);
    return 0;
}
