// Code for Day 2
#include<stdio.h>

int main() {
// Code for area of a rectangle when sides are given by user
    int l;
    int b;
    int area;
    
    printf("Enter length : ");
    scanf("%d", &l);
    printf("Enetr breadth : ");
    scanf("%d", &b);
    
    area = l * b;
    printf("Area of the rectangle is : %d", area);
}