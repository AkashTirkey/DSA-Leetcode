class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        //if the matrix is square 
        /*for(int i=0; i<n; i++){
            for(int j=i+1; j<m; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        return matrix;*/
        //Time complexity - O(n^2) space complexity -  O(1).

        //if matrix is not square 

        vector<vector<int>> result(m, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                result[j][i] = matrix[i][j];
            }
        }
        return result; 
        //time complexity - O(nxm) spacecomplexity - O(n)

    }
};