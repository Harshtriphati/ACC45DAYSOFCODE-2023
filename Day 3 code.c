// Code for Day 3
#include<stdio.h>

int main() {
// Code for finding the Simple Interest
    int p, r, t, si;
    
    printf("Enter principle value : ");
    scanf("%d", &p);
    printf("Enter time period : ");
    scanf("%d", &t);
    printf("Enter rate in % : ");
    scanf("%d", &r);
    
    si = p * t * r / 100;
    
    printf("Simple interest is : %d", si);
    return 0;
}