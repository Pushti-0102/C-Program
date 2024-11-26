//WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”. 

#include<stdio.h>

int main() {

    FILE *ptr;
    ptr=fopen("LNMIITSTUDENT.DAT","a");

    char str[10];
    printf("Enter the string : ");
    gets(str);

    fputs(str, ptr);
    
    fclose(ptr);

    return 0;
}

