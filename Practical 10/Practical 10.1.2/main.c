#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], scalarProduct[size], vectorSum[size], vectorProduct[size];

    // Input values to array1
    printf("\nEnter %d values for array1:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Input values to array2
    printf("\nEnter %d values for array2:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Scalar Sum (Adding values of each element of array1)
    int scalarSum = 0;
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i];
    }
    printf("\nScalar Sum: %d\n", scalarSum);

    // Vector Sum (Adding values of each relative element of arrays and store in vectorSum)
    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }
    printf("\nVector Sum:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    // Vector Product (Multiply values of each relative element of arrays and store in vectorProduct)
    for (int i = 0; i < size; i++) {
        vectorProduct[i] = array1[i] * array2[i];
    }
    printf("\nVector Product:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorProduct[i]);
    }
    printf("\n");

    // Scalar Product (Multiply values of each relative element of arrays and store in scalarProduct)
    int scalarProductSum = 0;
    for (int i = 0; i < size; i++) {
        scalarProduct[i] = array1[i] * array2[i];
        scalarProductSum += scalarProduct[i];
    }
    printf("\nScalar Product: %d\n", scalarProductSum);

    return 0;
}
