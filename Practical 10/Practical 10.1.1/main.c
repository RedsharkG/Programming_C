#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int sum = 0;
    int min, max;

    // Input values to the array
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];

        // Initially, set min and max to the first element
        if (i == 0) {
            min = max = arr[i];
        } else {
            // Update min and max if necessary
            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }

    // Calculate average
    float average = (float)sum / 10.0;

    // Print the results
    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    // Reverse order of values
    printf("\nArray elements in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
