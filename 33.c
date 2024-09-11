#include<stdio.h>
//Program to find out max and min from 'n' numbers.
int main() {
    
    int n;
    printf("How many numbers do you want to enter :");
    scanf("%d",&n);
    
    int i,max=0,min=99999999,Num[n];
    printf("Enter numbers :\n");
    
    for(i=0; i<=n-1; i++) {
        scanf("%d", &Num[i]);
        if(Num[i]>max) {
            max=Num[i];
        }
        if(Num[i]<min) {
            min=Num[i];
        }
    }
   
    printf("Maximum value is :%d",max);
    printf("\nMinimum value is :%d",min);

    return 0;
}
