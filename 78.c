#include<stdio.h>
//  WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.(153)
int check(int num);

int main() {
    printf("Enter a three number : \n");
    int num;
    scanf("%d", &num);
    if(check(num)==0) {
        printf("Not Armstrong number...");
    }
    else {
        printf("Armstrong number...");
    }
    return 0;
}

int check(int num) {
    int i,j,k,count=0;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            for(k=1; k<=10; k++)
            if(num==(i*i*i)+(j*j*j)+(k*k*k))
            {
                count++;
            }
            
        }
    }

    return (count>0);
}