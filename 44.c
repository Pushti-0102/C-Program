#include<stdio.h>
//Amount paid by consumer.
int main() {

    float unit, charg=0;

    printf("Enter your unit : ");
    scanf("%f", &unit);

    if(unit<=200) {
        charg=unit*0.005;
    }
    else if(unit>200 && unit<=400) {
        unit=unit-200;
        charg=unit*0.0065 + 100;
    }
    else if(unit>400 && unit<=600) {
        unit=unit-400;
        charg=unit*0.008 + 230;
    }
    else {
        unit=unit-600;
        charg=unit*0.0125 + 425;
    }

    printf("chargmission is %f Rupees.",charg);


    return 0;
}
