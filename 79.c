#include<stdio.h>
// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y . 
//USING POINTER................
int change(int *x, int *y);

int main() {
    int x=2, y=3;
    printf("x=%d and y=%d\n", x, y);
    change(&x, &y);
    printf("x=%d and y=%d\n", x, y);
    return 0;
}

int change(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}