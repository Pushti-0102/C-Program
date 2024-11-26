#include<stdio.h>
//Prorgram to read 3*3 matrix and multiply their value and store in third matrix. 
// 1   2   5       1   3   3       29  22  23
// 2   4   1       4   2   5       22  17  28  
// 5   3   3       4   3   2       29  30  36
int main() {

    int n1[3][3], n2[3][3], n3[3][3], i, j, k;
    
    printf("Enter elements of first array : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &n1[i][j]);
        }
    }
    
    printf("Enter elements of second array : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &n2[i][j]);
        }
    }

    //by multiplication & Third array...
    // for(i=0; i<3; i++) {
    //     for(j=0; j<3; j++) {
    //         n3[i][j]= (n1[i][0]*n2[0][j]) + (n1[i][1]*n2[1][j]) + (n1[i][2]*n2[2][j]) ;
    //     }
    // }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            n3[i][j]=0;
            for(k=0; k<3; k++) {
                n3[i][j]+=n1[i][k]*n2[k][j];
            }
        }
    }

    printf("Multiply of two array elements is : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d \t",n3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
