#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int r = 0;
    int c = *matrixColSize - 1;

    while (r < matrixSize && c >= 0) {
        if (target == matrix[r][c]) {
            return true;
        } else if (matrix[r][c] > target) {
            c--;
        } else {
            r++;
        }
    }
    return false; // Target not found
}

// Example usage
int main() {
    int matrix1[][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int* ptr1[3];
    for (int i = 0; i < 3; i++) {
        ptr1[i] = matrix1[i];
    }
    int target1 = 3;
    int cols1 = 4;
    printf("Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = %d\n", target1);
    printf("Output: %s\n", searchMatrix(ptr1, 3, &cols1, target1) ? "true" : "false");

    int matrix2[][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int* ptr2[3];
    for (int i = 0; i < 3; i++) {
        ptr2[i] = matrix2[i];
    }
    int target2 = 13;
    int cols2 = 4;
    printf("Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = %d\n", target2);
    printf("Output: %s\n", searchMatrix(ptr2, 3, &cols2, target2) ? "true" : "false");

    return 0;
}
