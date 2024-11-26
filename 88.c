//write a program to copy elements of one array to anther array using pointers.
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
    for(int i=0; i<n; i++) {
        num_1[i]=num[i];
    }
    int *ptr=num_1;
    return ptr;
}