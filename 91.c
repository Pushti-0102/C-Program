//Write a program to calculate the square and cube of an entered number 
//using pointer of a variable containing the entered number. 
#include<stdio.h>
#include<math.h>

void calculate(int *x, int *square, int *cube);

int main() {

    int square=0, cube=0;
    int x;
    printf("Enter number : ");
    scanf("%d", &x);
    
    calculate(&x, &square, &cube);

    printf("Square = %d", square);
    printf("\nCube = %d", cube);
    
    return 0;
}

void calculate(int *x, int *square, int *cube) {
    *square=pow(*x,2);
    *cube=pow(*x,3);
}