#include<stdio.h>
//Program to print sum of all odd and even number between 1 to n.
int main() {

    int i, j, n, sum_odd, sum_even;

    sum_odd=0, sum_even=0;

    printf("Enter a number :");
    scanf("%d", &n);

    /*for(i=1; i<=n; i+=2)  {
        sum_odd = sum_odd + i;
    }
    printf("Sum of odd no. is : %d.\n", sum_odd);

    for(j=2; j<=n; j+=2) {
        sum_even = sum_even + j;
    }
    printf("Sum of even no. is : %d.\n", sum_even);
    */

   for(i=1; i<=n; i++)
   {
    if(i%2==0)
    {
        sum_even = sum_even + i;
    }
    else{
        sum_odd = sum_odd + i;
    }
   }

   printf("Sum of odd no. is : %d.\n",sum_odd);
   
   printf("Sum of even no. is : %d.\n",sum_even);
 
    return 0;
} 
