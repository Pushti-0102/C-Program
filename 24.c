#include<stdio.h>
#include<math.h>
/*Write a program to find the value of Y using 
  Y(x,n)= 1+x   where n=1
          1+x/n where n=2
          1+x^n where n=3
          1+nx  where n>3 or n<1
*/
int main() {
  int x, n;
  
  printf("Enter two digits :");
  scanf("%d%d", &x, &n);

  if(n==1) {
    printf("%d", 1+x);
  }

  else if(n==2) {
    printf("%d", 1+x/n);
  }

  else if(n==3) {
    printf("%f", 1+(pow(x,n)));
  }

  else {
    printf("%d", 1+n*x);
  }

    return 0;
}