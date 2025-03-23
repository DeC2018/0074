#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int r = 0;
    int c = *matrixColSize - 1;
    while (r < matrixSize && c >= 0) {
        if (target == matrix[r][c])
            return true;
        else if (matrix[r][c] > target)
            c--;
        else
            r++;
    }
    return false;
}

int main() {
    int m1[] = {1,3,5,7};
    int m2[] = {10,11,16,20};
    int m3[] = {23,30,34,60};
    int* matrix[] = {m1, m2, m3};
    int matrixColSize = 4;

    int target1 = 3;
    printf("Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3\nOutput: %s\n", searchMatrix(matrix, 3, &matrixColSize, target1) ? "true" : "false");

    int target2 = 13;
    printf("Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13\nOutput: %s\n", searchMatrix(matrix, 3, &matrixColSize, target2) ? "true" : "false");

    return 0;
}
