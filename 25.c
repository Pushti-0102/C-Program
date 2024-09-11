#include<stdio.h>
//Program to print table of any number.
int main() {
    
    int n,i;
    
    printf("Enter any number :");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        printf("%d\n", i*n);
    }
    

    /* i=1;
   while(i<=10)
   {
    printf("%d\n", i*n);
    i++;
   }
   */

    /* i=1;
    do  {
        printf("%d\n",n*i);
        i++;
    }while(i<=10);
    */

    printf("End of Program.");

    return 0;
} 
