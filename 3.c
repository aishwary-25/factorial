#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;                    // Fixed initialization
    float average;

    for (int i = 0; i < n; i++)    // Fixed boundary condition
    {
        sum += arr[i];
    }

    average = (float)sum / n;      // Fixed integer division

    printf("Average = %.2f\n", average);

    return 0;
}