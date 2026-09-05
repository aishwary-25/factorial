#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;                    // Bug 1: Initialize sum to 0
    float average;

    for (int i = 0; i < n; i++)     // Bug 2: Stop at the last valid array index
    {
        sum += arr[i];
    }

    average = (float)sum / n;       // Bug 3: Perform floating-point division

    printf("Average = %.2f\n", average);

    return 0;
}