#include<stdio.h>
//Commission for sale.
int main() {

    float sal, com=0;

    printf("Enter your sales : ");
    scanf("%f", &sal);

    if(sal<=500) {
        com=sal*0.05;
    }
    else if(sal>500 && sal<=2000) {
        sal=sal-500;
        com=sal*0.1 + 35;
    }
    else if(sal>2000 && sal<=5000) {
        sal=sal-2000;
        com=sal*0.12 + 185;
    }
    else {
        com=sal*0.125;
    }

    printf("Commission is %f Rupees.",com);

    return 0;
}
