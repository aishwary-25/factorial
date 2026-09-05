#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;                       // Bug 1 fixed: Initialize sum
    int i = 0;
    float average;

    while (i < n)                      // Bug 2 fixed: Correct loop condition
    {
        sum = sum + arr[i];
        i++;
    }

    average = (float)sum / n;          // Bug 3 fixed: Floating-point division

    printf("Average = %.2f\n", average);

    return 0;
}