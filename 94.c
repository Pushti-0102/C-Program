//Write a program to copy a string in reverse order to another string variable using pointers for example.
//ST="SVNITJAVA" is copied as "AVAJTINVS"
#include<stdio.h>
#include<string.h>

char *change(char str[], int x);

int main() {
    
    char str[100];
    printf("Enter the string : ");
    gets(str);
    int x=strlen(str);

    for(int i=0; i<x; i++) {
        printf("%c", *(change(str, x)+i));
    }

    return 0;
}

char *change(char str[], int x) {
    char *ptr=str, str_1[x];
    int j=x-1;
    for(int i=0; i<x; i++) {
        str_1[i]=*(ptr+j);
        j--;
    }
    char *ptr2=str_1;
    return ptr2;
}