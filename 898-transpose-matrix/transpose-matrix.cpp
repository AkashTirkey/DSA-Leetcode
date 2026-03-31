class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        //if the matrix is a square matrix
        int n = matrix.size();
        int m = matrix[0].size();
        /*for(int i=0; i<n; i++){
            for(int j=i+1; j<m; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        return matrix; */
        //time complexity - O(n^2) space - O(1)

        //if not a square matrix
        vector<vector<int>> result(m, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                result[j][i] = matrix[i][j];
            }
        }
        return result;
        //time complexity - O(n x m) space complexity - O(m)
    }
};