#include<stdio.h>
#include<string.h>
// WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE 
// INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING 
// ARRAY OF STRUCTURE INTO FUNCTION).

struct student {
    char name[10];
    char number[10];
    int marks;
}stu;

void check(struct student s[10]);

int main() {

    struct student s[10];

    for(int i=0; i<2; i++) {
        printf("Enter name, number and marks : ");
        scanf("%s %s %d", &s[i].name, &s[i].number, &s[i].marks);
    }

    check(s);

    return 0;
}

void check(struct student s[10]) {
    for(int i=0; i<2; i++) {
        if(s[i].marks>500) {
            printf("%s scored more than 500.\n", s[i].name);
        }
    }
}
