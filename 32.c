#include<stdio.h>
//Program to find out max and second max no. from 'n' numbers.
int main() {
   
    int n;
   
    printf("How many numbers do you want to enter :");
    scanf("%d",&n);
    
    int i,max=0,smax=0,Num[n];
    printf("Enter numbers :");
    
    for(i=0; i<=n-1; i++) {
        scanf("%d", &Num[i]);
        if(Num[i]>max) {
            smax=max;
            max=Num[i];
        }
        else if(smax<Num[i] && Num[i]<max) {
            smax=Num[i];
        }
        }
    
    printf("Maximum value is :%d",max);
    printf("\nSecond Maximum value is :%d",smax);
   
    return 0;
}
