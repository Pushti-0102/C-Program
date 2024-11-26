#include<stdio.h>
// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.  
void check(char a); 
int main () {
    char a;
    printf("Enter a character : ");
    scanf("%c", &a);
    check(a);
    return 0;
}
void check(char a) {
    if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u') {
        printf("vowel");
    }
    else {
        printf("Consonant");
    }
}