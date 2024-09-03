#include<stdio.h>
//Program to read two numbers and calculate power without using header file.(<math.h>)
int main() {

    int i,n,m,power;

    printf("Enter two number :\n");
    scanf("%d%d",&n,&m);

    power=n;

    for(i=2; i<=m; i++)
    {
        power=power*n;
    }

    printf("%d",power);


    return 0;
}