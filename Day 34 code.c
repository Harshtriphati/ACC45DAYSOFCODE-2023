// Code for Day 31
#include<stdio.h>
#include<math.h>

int main() {
// Code to find the roots of a quadratic equation
    float a, b, c;
    float d, r1, r2;
    printf("Enter the value of a : ");
    scanf("%f", &a);
    printf("Enter the value of b : ");
    scanf("%f", &b);
    printf("Enter the value of c : ");
    scanf("%f", &c);
    
    d = (b * b) - (4 * a * c);
    
    if(d == 0) {
        printf("Roots are equal\n");
        r1 = (- b) / (2 * a);
        r2 = r1;
        printf("Roots of the equation are %f and %f\n", r1, r2);
    }else if(d > 0) {
        printf("Roots are positive\n");
        r1 = ((- b) + sqrt(d)) / (2 * a);
        r2 = ((- b) - sqrt(d)) / (2 * a);
        printf("Roots of the equation are %f and %f\n", r1, r2);
    }else {
        printf("Roots are imaginary");
    }
    return 0;
}