#include<stdio.h>
#include<string.h>
// WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.
//USING POINTER TO STRUCTURE. 

struct book {
    char name[100];
    char author_name[100];
    int addition[100];
    int prize[100];
    char summery[100];
};

int main() {

    struct book b1;
    printf("Enter book name : ");
    gets(b1.name);
    printf("Enter book author name : ");
    gets(b1.author_name);
    printf("Enter book addition : ");
    scanf("%d", &b1.addition);
    printf("Enter book prize : ");
    scanf("%d", &b1.prize);
    printf("Enter book summery : ");
    char Summery[100];
    scanf("%s", &Summery);
    strcpy(b1.summery,Summery);

    printf("\n");

    puts(b1.name);
    puts(b1.author_name);
    printf("%d\n", *b1.addition);
    printf("%d\n", *b1.prize);
    puts(b1.summery);
    return 0;
}
