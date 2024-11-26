#include<stdio.h>
//Prorgram to read 3*3 matrix and substract their value and store in third matrix. 
int main() {
    
    int i, j, Num1[3][3], Num2[3][3], Num3[3][3], sum;
    
    printf("Enter 3 elements of first array : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &Num1[i][j]);
            }
    }

    printf("Enter 3 elements of second array : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &Num2[i][j]);
        }
    }

    printf("Addition of two array elements is : \n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            Num3[i][j] = Num1[i][j] - Num2[i][j];
            printf("%d \t",Num3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
