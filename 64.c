#include<stdio.h>
//Prorgram to read 3*3 matrix and print sum of all rows.
int main() {

    int i,j,num[3][3],sum=0;
    printf("Enter the elements of an 3*3 array : \n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &num[i][j]);
            sum+=num[i][j];
            }
        printf("Sum of %d row is : %d.\n", i, sum);
        sum=0;
    }

    return 0;
}
