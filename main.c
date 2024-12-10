#include <stdio.h>


int main()
{
    int array[] = {2, 3, 4, 10, 40};
    int n = sizeof(array) / sizeof(array[0]);
    int item;
    printf("Enter the Item :");
    scanf("%d", &item);
    int result = binarySearch(array, item, 0, n - 1);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
int binarySearch(int array[], int item, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] == item)

            return mid;

        if (array[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
