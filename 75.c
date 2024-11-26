#include<stdio.h>
//  The annual examination results of 10 students are tabulated as follows: 
// Roll No.       Subject1     Subject2       Subject3  
// .
// .
// Write a program to read the data and determine the following: 
// (a) Total marks obtained by each student. 
// (b) The highest marks in each subject and the Roll No. of the student who 
//     secured it. 
// (c) The student who obtained the highest total marks.
int main() {

    int score[5][5], i, j, k=0, max=0;
    printf("Enter your 3 subject marks  : \n");

//read the data...
    for(i=0; i<5; i++) {
        score[i][0]=i;
        score[i][4]=0;
        for(j=1; j<4; j++) {
            scanf("%d", &score[i][j]);
            score[i][4]+=score[i][j];
        }
    }

//total marks...
    printf("Total marks of each students......\n");
    for(i=0; i<5; i++) {
        printf("%d. %d\n", i+1, score[i][4]);
    }

//Highest marks...
    for(j=1; j<4; j++) {
        max=0;
        for(i=0; i<5; i++) {
            if(max<score[i][j]) {
                max=score[i][j];
                k=i;
            }
        }
        printf("Highest marks in subject%d : %d.%d\n", j, k+1, max);
    }

//highest total marks...
    max=0;
    for(i=0; i<5; i++) {
        if(max<score[i][4]) {
            max=score[i][4];
            k=i;
        }
    }
    printf("\nHighest total marks is : %d.%d", k+1, max);

    return 0;
}