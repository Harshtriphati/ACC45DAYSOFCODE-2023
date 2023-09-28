// Code for Day 11
#include<stdio.h>

int main() {
// Code for telling whether the student is pass or fail
    int marks;
    printf("Enter the marks(0-100) : ");
    scanf("%d", &marks);
    
    if(marks >= 0 && marks <= 30) {
        printf("Fail\n");
    } else if (marks > 30 && marks <= 100) {
        printf("pass\n");
    } else {
        printf("Wrong marks");
    }
    
    return 0;
}