#include<stdio.h>
//Program to check whether a number is prime or not.
int main() {

    int n,i,count;

    printf("Enter a number :");
    scanf("%d", &n);

    /*for(i=2; i<n; i++ ) {
        
       if(n%i==0){
        printf("%d is not a prime no.\n",n);
        break;
       } 
       
    }
    */

   for(i=1; i<=n; i++){
    if(n%i==0){
        count++;
    }
   }

   if(count>2)
   {
    printf("%d is not a prime number.\n", n);
   }
   else{
    printf("%d is a prime number.\n", n);
   }


    printf("Thank You.");

    
    return 0;
} 
