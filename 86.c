#include<stdio.h>
#include<string.h>
// WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT  LENGTH OF STRING. 
int length(char str[]);
int main() {
    char str[1000];
    printf("Enter String : ");
    gets(str);
    printf("%d", length(str));
    return 0;
}
int length(char str[]) {
    int x=strlen(str);
    return x;
}