#include <stdio.h>

// Binary search on a sorted array. Returns index of target, or -1 if not found.
int binary_search(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid;      // should be mid + 1
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    int idx = binary_search(arr, size, 7);
    printf("Index: %d\n", idx);

    return 0;
}