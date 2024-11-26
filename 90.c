//Write a program to find length of a given string including and excluding spaces using pointers.
#include<stdio.h>
#include<string.h>

void space(char str[], int *x, int *y);

int main() {
    int x=0, y=0;
    char str[100];
    printf("Enter String : ");
    gets(str);
    space(str, &x, &y);
    printf("Length of string including space : %d", x);
    printf("\nLength of string excluding space : %d", y);
    return 0;
}

void space(char str[], int *x, int *y) {
    *x=strlen(str);
    int count=0;
    for(int i=0; i<*x; i++) {
        if(str[i]==32) {
            count++;
        }
    }
    *y=*x-count;
}