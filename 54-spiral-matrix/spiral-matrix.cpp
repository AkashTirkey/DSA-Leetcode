class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int n = matrix.size(); // row size
        int m=matrix[0].size(); //col size
        int top = 0, bottom = n-1;
        int left = 0, right= m-1;

        if(matrix.empty() || matrix[0].empty()) return result;

        while(top<= bottom && left <= right){


            // 👉sweep top row
            for(int  j=left; j<= right; j++){
                result.push_back(matrix[top][j]);
            }
                top++;

            // 👇sweep right col
            for(int i = top; i<=bottom; i++){
                result.push_back(matrix[i][right]);
            }
            right--;


        //👈sweep bottom row
        if(top <= bottom) {
            for(int j=right; j>=left; j--){
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        //sweep left column 👆
         if(left <= right){
            for(int i=bottom; i>=top; i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }

        }
        return result; 
        //Time complexity - O(N x M space complexity - O(1)
    }
};