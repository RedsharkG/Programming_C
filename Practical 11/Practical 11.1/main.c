#include <stdio.h>

int main() {
    int size;
    int array1[100], array2[100], scalarSum = 0;
    int vectorSum[100], vectorProduct[100], scalarProduct = 0;

    printf("Enter the size of the arrays (max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid size. Please enter a valid size between 1 and 100.\n");
        return 1;
    }

    // Input values into the first array
    printf("Enter %d integer values for the first array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Input values into the second array
    printf("Enter %d integer values for the second array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Scalar Sum (Adding values of each element of an array)
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }
    printf("Scalar Sum: %d\n", scalarSum);

    // Vector Sum (Adding values of each relative elements of an array and store them in the third array)
    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }
    printf("Vector Sum: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    // Vector Product (Multiply values of each relative elements of an array and store them in the third array)
    for (int i = 0; i < size; i++) {
        vectorProduct[i] = array1[i] * array2[i];
    }
    printf("Vector Product: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorProduct[i]);
    }
    printf("\n");

    // Scalar Product (Multiply values of each relative elements of an array and store them in the third array. After placing the values in the third array, add all the values)
    for (int i = 0; i < size; i++) {
        scalarProduct += array1[i] * array2[i];
    }
    printf("Scalar Product: %d\n", scalarProduct);

    return 0;
}