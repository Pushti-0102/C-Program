// A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL 
// NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N 
// STUDENTS.
#include<stdio.h>

struct student {
    int number;
    char name[10];
    int marks;
};

int main() {

    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);

    FILE *ptr;
    ptr=fopen("LNMIITSTUDENT.JAVA", "a");

    struct student s[n];
    for(int i=0; i<n; i++) {
        printf("Enter number, name and marks : ");
        scanf("%d %s %d", &s[i].number, &s[i].name, &s[i].marks);
        fprintf(ptr,"%d %s %d \n", s[i].number, s[i].name, s[i].marks);
    }

    fclose(ptr);

    return 0;    

}