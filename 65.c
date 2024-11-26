#include<stdio.h>
//Prorgram to read 3*3 matrix and print its transport.
int main() {

    int i, j, num[3][3], Num[3][3];
    printf("Enter the elements of array : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            Num[i][j]=num[j][i];
        }
    }

    printf("Transport of array : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d \t", Num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
