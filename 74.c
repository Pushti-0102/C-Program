#include<stdio.h>
// Given are one dimensional arrays A and B which are sorted in ascending order. 
// Write a program to merge them into a single sorted array C that contains every 
// item form array A and B, in ascending order. 
int main() {

    int Num1[5]={1,3,5,7,9}, Num2[5]={2,4,6,8,10}, Num3[10], i, j, temp=0;
    
    for(i=0; i<5; i++) {
        Num3[i]=Num1[i];
        Num3[i+5]=Num2[i];
    }

    for(i=0; i<10; i++) {
        for(j=9; j>i; j--) {
            if(Num3[i] > Num3[j]) {
                temp=Num3[i];
                Num3[i]=Num3[j];
                Num3[j]=temp;
            }
        }
    }

    for(i=0; i<10; i++) {
        printf("%d \t", Num3[i]);
    }

    return 0;
}