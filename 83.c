#include<stdio.h>
//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
int max(int array[]);

int main() {
    int array[10];
    printf("Enter array elements : \n");
    for(int i=0; i<10; i++) {
        scanf("%d", &array[i]);
    }
    printf("Maximum number is : %d.", max(array));
    return 0;
}

int max(int array[]) {
    int max=0;
    for(int i=0; i<10; i++) {
        if(max<array[i]) {
            max=array[i];
        }
    }
    return max;
}