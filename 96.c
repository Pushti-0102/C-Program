//Write a C program to sort the given n number of strings in ascending order using pointers.
#include<string.h>
#include<stdio.h>

int main() {

    int n;
    printf("Enter the number of string : ");
    scanf("%d", &n);

    char str[n][10], *ptr[n], *x;

    for(int i=0; i<n; i++) {
        scanf("%s", &str[i]);
        ptr[i]=str[i];
    }
    
    char temp[10];
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if( strcmp (str[i], str[j]) > 0 ) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\n");

    for(int i=0; i<n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

