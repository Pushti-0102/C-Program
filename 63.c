#include<stdio.h>
//Program to read 3*3 matrix and findout max and min elements.
int main() {

    int i,j,num[3][3],max=0,min=99999999;
    printf("Enter the elements of an 3*3 array : \n ");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &num[i][j]);
            if(num[i][j]>max) {
                max=num[i][j];
            }
            if(num[i][j]<min) {
                min=num[i][j];
            }
        }
    }

    printf("Max is: %d and Min is: %d", max, min);

    return 0;
}
