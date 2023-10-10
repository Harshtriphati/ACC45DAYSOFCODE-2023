// Code for Day 23
#include<stdio.h>

int main() {
// Code to print area of triangle usingn Heron's formula
    int a, b, c;// Sides of the triangle
    int s;// 1/2 of Perimeter of trianglem or (a + b + c)/2
    printf("Enter first side of the triangle : ");
    scanf("%d", &a);
    printf("Enter second side of the triangle : ");
    scanf("%d", &b);
    printf("Enter third side of the triangle :");
    scanf("%d", &c);
    
    s = (a + b + c) / 2;
    
    if(a + b > c || b + c > a || a + c > b) {
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of the triangle whose sides are %d, %d and %d is %f\n", a, b, c, area);
    }else {
        printf("These are not the sides of a triangle\n");
    }
    return 0;
}