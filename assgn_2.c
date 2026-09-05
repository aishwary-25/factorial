#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 1;                    // ERROR 1: sum should be initialized to 0
    float average;

    for (int i = 0; i <= n; i++)   // ERROR 2: loop accesses arr[5], out of bounds
    {
        sum += arr[i];
    }

    average = sum / n;             // ERROR 3: integer division loses the decimal part

    printf("Average = %.2f\n", average);

    return 0;
}