// Code for Day 21
#include<stdio.h>

int main() {
// Code to Tell whether the triangle can be made by the sides given by the user
    int side1, side2, side3;
    printf("Enter first side : ");
    scanf("%d", &side1);
    printf("Enter second side : ");
    scanf("%d", &side2);
    printf("Enter third side : ");
    scanf("%d", &side3);
    
    if(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2){
        printf("The sides %d, %d and %d can form a triangle", side1, side2, side3);
    }else{
        printf("The sides %d, %d and %d can't form a triangle", side1, side2, side3);
    }
    return 0;
}