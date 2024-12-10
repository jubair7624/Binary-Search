#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
 {
    while (low <= high)
        {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int array[] = {2, 3, 4, 10, 40};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 10;
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
