#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int left = 0;
    int right = matrixSize * (*matrixColSize) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / (*matrixColSize)][mid % (*matrixColSize)];

        if (midValue == target) {
            return true;
        } else if (midValue < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    int matrix1[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int* matrix1Ptrs[3] = {matrix1[0], matrix1[1], matrix1[2]};
    int matrix1ColSize = 4;
    int target1 = 3;
    printf("Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = %d\n", target1);
    printf("Output: %s\n", searchMatrix(matrix1Ptrs, 3, &matrix1ColSize, target1) ? "true" : "false");

    int matrix2[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int* matrix2Ptrs[3] = {matrix2[0], matrix2[1], matrix2[2]};
    int matrix2ColSize = 4;
    int target2 = 13;
    printf("Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = %d\n", target2);
    printf("Output: %s\n", searchMatrix(matrix2Ptrs, 3, &matrix2ColSize, target2) ? "true" : "false");

    return 0;
}
