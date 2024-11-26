// WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE.
#include<stdio.h>
#include<string.h>

int main() {

    FILE *ptr;
    ptr=fopen("text.txt", "r");

    char str[20];
    fgets(str, 20, ptr);

    int count=0, x=strlen(str);
    for(int i=0; i<x; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') 
            count++;
    }

    printf("Number of vowels = %d", count);

    fclose(ptr);
    return 0;
}