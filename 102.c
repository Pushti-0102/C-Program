// WRITE A  C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE. 
#include<stdio.h>
#include<string.h>

int main() {

    int characters=0, words=1, lines=1, i=0;

    FILE *ptr;
    ptr=fopen("text.txt", "r");

    char str=fgetc(ptr);
    while(str!=EOF) {
        if(str==' ' || str=='\n')
            words++;
        if(str=='\n')
            lines++;
        i++;
        characters++;
        str=fgetc(ptr);
    }

    printf("characters=%d, words=%d, lines=%d", characters, words, lines);

    return 0;

}