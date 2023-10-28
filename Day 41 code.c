// Code for Day 41
#include<stdio.h>

int main() {
// Code to tell whether the year is a leap year or not
    int year;
    printf("Enter number of days : ");
    scanf("%d", &year);
    
    if(year % 4 == 0) {
        printf("Year is a leap year\n");
    }else {
        printf("Year is not a leap year\n");
    }
    return 0;
}
