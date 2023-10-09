// Code for Day 22
#include<stdio.h>

int main() {
// Code for the Right angled triangle
    int a;//First side
    int b;//Second side
    int c;//Third side
    printf("Enter first side : ");
    scanf("%d", &a);
    printf("Enter second side : ");
    scanf("%d", &b);
    printf("Enter third side : ");
    scanf("%d", &c);
    
    if(a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
        printf("Side %d, %d and %d are the sides of a Right-angled triangle\n", a, b, c);
    }else {
        printf("These sides can't form a Right-angled triangle\n");
    }
    return 0;
}