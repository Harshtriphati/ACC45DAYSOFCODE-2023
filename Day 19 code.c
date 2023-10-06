// Code for Day 19
#include<stdio.h>

int main() {
// Code To determine which type of triangle it is if the sides are entered by user
    int side1, side2, side3;
    printf("Enter the length of first side : ");
    scanf("%d", &side1);
    printf("Enter the length of second side : ");
    scanf("%d", &side2);
    printf("Enter the length of third side : ");
    scanf("%d", &side3);
    
    if (side1 == side2 && side2 == side3){
        printf("These are the sides of an equilateral triangle\n");
    }else if (side1 == side2 || side2 == side3 || side1 == side3){
        printf("These are the sides of an isosceles triangle\n");
    }else {
        printf("These are the sides of a scaler triangle\n");
    }
    return 0;
}