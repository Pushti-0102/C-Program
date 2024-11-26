//write a program to copy elements of one array to anther array using pointers.
//Order of elements of second array should be opposite to first attay.
#include<stdio.h>

int *change(int num[], int n);

int main() {
    
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++) {
        printf("Enter number :  ");
        scanf("%d", &num[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d\t", *(change(num, n)+i));
    }
    
    return 0;
}

int *change(int num[], int n) {
    int num_1[n];
    for(int i=n-1, j=0;  i>=0, j<n;  i--, j++) {
        num_1[j]=num[i];
    }
    int *ptr=num_1;
    return ptr;
}