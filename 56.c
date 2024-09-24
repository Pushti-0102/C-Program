#include<stdio.h>
//Program to read an array of 10 integer and count total no of Positive, Negative an Zero integer.
int main() {

    int i, Positive=0, Negative=0, Zero=0, Num[10];
    printf("Enter elements of Array : \n");

    for(i=0; i<10; i++) {
        scanf("%d", &Num[i]);
        if(Num[i]<0) {
            Negative++;
        }
        else if(Num[i]>0) {
            Positive++;
        }
        else {
            Zero++;
        }
    }

    printf("Total +ive numbers are : %d.\nTotal -ive numbers are : %d\nTotal entered Zero are : %d", Positive, Negative, Zero);

    return 0;
}