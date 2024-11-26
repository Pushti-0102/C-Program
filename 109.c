// MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C 
// A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO MODIFY)

#include<stdio.h>

int main() {
    int n;
    printf("Enter value : ");
    scanf("%d", &n);
    int *ptr=&n;
    *ptr+=2;
    printf("Modified value = %d", n);
    return 0;
}