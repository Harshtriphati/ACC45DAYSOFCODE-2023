// Code for Day 25
#include<stdio.h>
#include<math.h>

float rectangleArea(float l, float b);

int main() {
// Code to calculate the area of a square by declaring a function
    float l, b;
    printf("Enter length : ");
    scanf("%f", &l);
    printf("Enter bredth : ");
    scanf("%f", &b);
    printf("Area is %f", rectangleArea(l, b));
    return 0;
}
float rectangleArea(float l, float b) {
    return l * b;
}