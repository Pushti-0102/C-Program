// CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, PRICE AND 
// AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND  PRICE AS 
// INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT. 

#include<stdio.h>

struct member {
    char name[10];
    char Item_name[10][10];
    int quantity[10];
    int price[10];
    int amount[10];
};

int amount(int a, int b) {
    return a*b;
}

int main() {

    int n;

    struct member m;
    printf("Enter your name : ");
    scanf("%s", &m.name);
    printf("Enter number of item : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("Enter item name : ");
        scanf("%s", &m.Item_name[i]);
        printf("Enter quantity : ");
        scanf("%d", &m.quantity[i]);
        printf("Enter price : ");
        scanf("%d", &m.price[i]);
        m.amount[i]=amount(m.quantity[i], m.price[i]);
    }

    int total=0;
    for(int i=0; i<n; i++) {
        total+=m.amount[i];
    }

    printf("Total amount = %d", total);

    return 0;
}

