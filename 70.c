#include<stdio.h>
//Program to read an array and print the occurrence of any particular element in the array.
int main() {

    int num[10], i, count=0, n;
    printf("Enter 10 elements of an array : \n");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter a number which occurrence do you want : \n");
    scanf("%d", &n);

    for(i=0; i<10; i++) {
        if(num[i]==n) {
            count++;
        }
    }

    printf("%d times...", count);

    return 0;
}
