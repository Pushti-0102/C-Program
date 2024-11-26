//Write a C program to count the number of vowels in a string using pointer.

#include<stdio.h>
#include<string.h>

int vowels(int x, char str[]) ;

int main() {

    char str[20];
    printf("Enter the string : ");
    gets(str);

    int x=strlen(str);

    printf("Number of vowels : %d", vowels(x, str));

    return 0;

}

int vowels(int x, char str[]) {
    
    char *ptr=str;
    int count=0;

    for(int i=0; i<x; i++) {
        if( *(ptr+i)=='a' || *(ptr+i)=='e' || *(ptr+i)=='i' || *(ptr+i)=='o' || *(ptr+i)=='u' || *(ptr+i)=='A' || *(ptr+i)=='E' || *(ptr+i)=='I' || *(ptr+i)=='O' || *(ptr+i)=='U' ) {
            count++;
        }
    }

    return count;
}