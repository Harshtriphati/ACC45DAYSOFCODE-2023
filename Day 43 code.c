// Code for Day 43
#include <stdio.h>

int main() {
// Code to find average of n numbers of element(given by user) through array
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    
    for(i = 0; i < n; i++) {
        printf("Enter %d numbers: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;
    printf("Average value = %.2f\n", average);

    return 0;
}