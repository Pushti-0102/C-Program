#include<stdio.h>
//Program to check whether a number is armstrong or not.
int main() {

    int i,j,k,a,count=0;

    printf("Enter a Three no. :");
    scanf("%d", &a);

    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            for(k=1; k<=10; k++)
            if(a==(i*i*i)+(j*j*j)+(k*k*k))
            {
                count++;
            }
            
        }
    }

    if(count>0) {
        printf("%d is a armstrong number.", a);
    }
    else{
        printf("%d is not armstrog number.", a);
    }


    return 0;
} 
