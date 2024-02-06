#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 100};
    int size = sizeof(arr)/sizeof(arr[0]);

    int search;
    printf("Enter the element to search: ");
    scanf("%d", &search);

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right)/2;

        if (arr[mid] == search) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < search)
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("Element not found");
    return 0;
}
