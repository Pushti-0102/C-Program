#include<stdio.h>
// Write a program in C to find the pivot element of a sorted and rotated (reverse) array 
// using binary search. Pivot element is the only element in input array which is 
// smaller than its previous element. A pivot element divided a sorted rotated array 
// into two monotonically increasing array. 
int main() {

    int i, j, temp=0, num[10], Num[10], n;
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

    printf("Pivot element is %d.\n", num[9]);

    printf("Enter nth position : ");
    scanf("%d", &n);

    for(i=0; i<=10-n; i++) {
        Num[i]=num[i+n-1];
    }
    for(i=11-n,j=0; i<10; i++,j++) {
        Num[i]=num[j];
    }

    for(i=0; i<10; i++) {
        printf("%d \t", Num[i]);
    }

    return 0;
}
