#include<stdio.h>
//Program to perform linear search on an array.
int main() {

    int n, i, num[10], count=0, k=0;
    printf("Enter 10 elements of an array : ");

    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter a number which one you want.... : \n");
    scanf("%d", &n);

    for(i=0; i<10; i++) {
        if(n==num[i]) {   
            //printf("%d is found in data \n :)",n);
            k=i+1;
            count++;
            break;
        }
    }

    if(count!=0)
    printf("Index no. is %d", k);


    if(count==0) 
        printf("%d is not found in data... :(",n);
    
    return 0;
}
