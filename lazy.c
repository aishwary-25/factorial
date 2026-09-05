#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);     // Bug 2: Determine array size automatically
    int sum = 0;                             // Bug 1: Initialize sum
    float average;

    for (int i = 0; i < n; ++i)
    {
        sum = sum + arr[i];
    }

    average = sum * 1.0f / n;                // Bug 3: Force floating-point division

    printf("Average = %.2f\n", average);

    return 0;
}