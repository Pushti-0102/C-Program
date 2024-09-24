#include<stdio.h>
//Program to read an array of 10 integer and count total no of odd and total no. of even element. 
int main() {

    int i, count_odd=0, count_even=0, Num[10];
    printf("Enter elements of Array : \n");

    for(i=0; i<10; i++) {
        scanf("%d", &Num[i]);
        if(Num[i]%2==0) {
            count_even++;
        }
        else {
            count_odd++;
        }
    }

    printf("Even elements are : %d and Odd elemnets are : %d.", count_even, count_odd );

    return 0;
}