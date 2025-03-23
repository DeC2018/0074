#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = m * n - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midVal = matrix[mid / n][mid % n];
            
            if (midVal == target) {
                return true;
            } else if (midVal < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return false;
    }
};

int main() {
    Solution solution;
    
    // Example 1:
    vector<vector<int>> matrix1 = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target1 = 3;
    cout << "Input: matrix = [[" << matrix1[0][0] << "," << matrix1[0][1] << "," << matrix1[0][2] << "," << matrix1[0][3] << "],[" << matrix1[1][0] << "," << matrix1[1][1] << "," << matrix1[1][2] << "," << matrix1[1][3] << "],[" << matrix1[2][0] << "," << matrix1[2][1] << "," << matrix1[2][2] << "," << matrix1[2][3] << "]], target = " << target1 << endl;
    cout << "Output: " << (solution.searchMatrix(matrix1, target1) ? "true" : "false") << endl;
    
    // Example 2:
    vector<vector<int>> matrix2 = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target2 = 13;
    cout << "Input: matrix = [[" << matrix2[0][0] << "," << matrix2[0][1] << "," << matrix2[0][2] << "," << matrix2[0][3] << "],[" << matrix2[1][0] << "," << matrix2[1][1] << "," << matrix2[1][2] << "," << matrix2[1][3] << "],[" << matrix2[2][0] << "," << matrix2[2][1] << "," << matrix2[2][2] << "," << matrix2[2][3] << "]], target = " << target2 << endl;
    cout << "Output: " << (solution.searchMatrix(matrix2, target2) ? "true" : "false") << endl;
    
    return 0;
}
