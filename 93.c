//Write a C program using pointer to count the numbers of words in a given string. 
#include<stdio.h>
#include<string.h>

int words(char str[], int x);

int main() {

    char str[100];
    printf("Enter the string : ");
    gets(str);

    int x=strlen(str);

    printf("The numbers of words : %d", words(str, x));

    return 0;
}

int words(char str[], int x) {
    
    char *ptr=str, count=1;
    for(int i=0; i<x; i++) {
        if(*(ptr+i)==32) {
            count++;
        }
    }

    return count;
}