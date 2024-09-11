#include<stdio.h>
//Read a number N and print if N is prime or composite.
int main() {

    int i,n,count;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
       if(n%i==0){
        count++;
       }
    }

   if(count>2)
   {
    printf("%d is a composite  number.\n", n);
   }
   else{
    printf("%d is a prime number.\n", n);
   }

    return 0;
}
