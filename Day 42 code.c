// Code for Day 42
#include<stdio.h>

int main() {
// Code to print no of days and name in a month if user enters the month number
    int month, input = 1;
    
    while(input == 1) {
        printf("Enter the month number : "); // 1 for January; 2 for february etc.
    scanf("%d", &month);
    
        switch(month) {
        case 1:
        printf("January\n");
        printf("It has 31 days\n");
        input = 0;
        break;
        
        case 2:
        printf("February\n");
        printf("It has 28 days\n");
        input = 0;
        break;
        
        case 3:
        printf("March\n");
        printf("It has 31 days\n");
        input = 0;
        break;
        
        case 4:
        printf("April\n");
        printf("It has 30 days\n");
        input = 0;
        break;
        
        case 5:
        
        printf("May\n");
        printf("It has 31 days\n");
        input = 0;
        break;
        
        case 6:
        printf("June\n");
        printf("It has 30 days\n");
        input = 0;
        break;
        
        case 7:
        printf("July\n");
        printf("It has 31 days\n");
        input = 0;
        break;
        
        case 8:
        printf("August\n");
        printf("It has 31 days\n");
        input = 0;
        break;
        
        case 9:
        printf("September\n");
        printf("It has 30 days\n");
        input = 0;
        break;
        
        case 10:
        printf("October\n");
        printf("It has 31 days\n");
        input = 0;
        break;
        
        case 11:
        printf("November\n");
        printf("It has 30 days\n");
        input = 0;
        break;
        
        case 12:
        printf("December\n");
        printf("It has 31 days\n");
        input = 0;
        break;
        
        default:
        printf("Invalid input\n");
        input = 1;
        }
    }
}