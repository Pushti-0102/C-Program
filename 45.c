#include<stdio.h>
/*With this Program the user has to guess a number that the program has picked as the lucky number.
 It uses one for loop and plenty of if statements. 
 I have also thrown in a conditional operator, just to make sure you haven't forgotten how to use it!
*/

int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    (n==7) ? (printf("Yep! It's lucky number.\n:)")) : (printf("Better luck for next time...\n :("));

    return 0;
}