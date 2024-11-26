//  IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS 
// LAST N DIGITS 
// FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).

#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int power = pow(10, n);
    int last_n_digits = num % power;
    
    int reversed = 0;
    while (last_n_digits > 0) {
        reversed = reversed * 10 + last_n_digits % 10;
        last_n_digits /= 10;
    }

    return (num / power) * power + reversed;
}


int main() {
    int num, n;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    int result = flip(num, n);
    printf("The number after flipping the last %d digits is: %d\n", n, result);

    return 0;
}


