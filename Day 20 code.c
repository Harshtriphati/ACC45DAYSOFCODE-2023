// Code for Day 20
#include<stdio.h>

int main() {
// Code to find profit and loss 
    int sp;// Selling price
    int cp;// Cost price
    printf("Enter the value of Selling price in rupees : ₹");
    scanf("%d", &sp);
    printf("Enter the value of Cost price in rupees : ₹");
    scanf("%d", &cp);
    
    if(sp > cp){
        int profit = sp - cp;
        printf("Profit is ₹%d", profit);
    }else {
        int loss = cp - sp;
        printf("Loss is ₹%d", loss);
    }
    return 0;
}