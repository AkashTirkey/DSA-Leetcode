class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bottom=n-1;
        int left = 0, right=m-1;


        if(matrix.empty() || matrix[0].empty()) return result;

        while(top<=bottom && left<=right){

            //top row
            for(int i =left; i<=right; i++){
                result.push_back(matrix[top][i]);
            }
            top++; // now top is 1

            //right col
            for(int j=top; j<=bottom; j++){
                result.push_back(matrix[j][right]);
            }

            right--; //right is now m-2
            
            // bottom row
            if(top<=bottom) {
                for(int i = right; i>=left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--; // bottom is now n-2
            }

            //left column
            if(left<=right){
                for(int j = bottom; j>=top; j--){
                    result.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return result;
        // Time complexity = O(n x m) space complexity - O(1)
    }
};