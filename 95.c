//Write a program to declare a structure with data members employee number, employee name and basic pay of the employee.
//Declare a structure pointer and an array employ with 50 elements.
//The program should read 'N' employee details and print the list of all employee along with the basic a pay.
#include<stdio.h>
#include<string.h>

struct emp {
    char name[10];
    int number;
    float pay;
}e[50];

int main() {

    int n;
    printf("Enter the number of employee : ");
    scanf("%d", &n);

    struct emp *ptr;
    ptr=e;

    for(int i=0; i<n; i++) {
        char name_[10];
        scanf("%s", &(*(ptr+i)).name);
        scanf("%d", &(*(ptr+i)).number);
        scanf("%f", &(*(ptr+i)).pay);
        }

    for(int i=0; i<n; i++) {
        printf("%s\t", (*(ptr+i)).name);
        printf("%d\t", (*(ptr+i)).number);
        printf("%f\n", (*(ptr+i)).pay);
    }

    return 0;
}

