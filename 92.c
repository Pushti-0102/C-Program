//Write a C Program using pointers to find the biggest of given list of n integers.
#include<stdio.h>

int biggest(int n, int num[n]);

int main() {
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++) {
        printf("Enter number : ");
        scanf("%d", &num[i]);
    }
    
    printf("Biggest number is : %d", biggest(n, num));

    return 0;
}

int biggest(int n, int num[n]) {
    
    int *ptr=num, max=0;
    
    for(int i=0; i<n; i++) {
        if(max<*(ptr+i)) {
            max=*(ptr+i);
        }
    }
    
    return max;
}