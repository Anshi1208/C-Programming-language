#include <stdio.h>

int main() {
    int n, i;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if array size is valid
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, secondLargest;

    // Initialize largest and secondLargest
    largest = secondLargest = -2147483648; // Smallest possible integer

    // Find the largest and second largest numbers
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if second largest is updated
    if (secondLargest == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest number is: %d\n", secondLargest);
    }

    return 0;
}
