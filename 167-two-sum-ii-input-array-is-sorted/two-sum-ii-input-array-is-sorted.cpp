class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int n=numbers.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(numbers[i] + numbers[j] == target){
        //             return {i+1,j+1};
        //         }
        //     }
        // }
        // return {-1,-1};
        //Time complexity - O(n^2) space complexity-O(1)

        //optimal solution using Two pointers since solution is needed to be O(1) space complexity
        int left = 0;
        int n=numbers.size();
        int right = n-1;

        while(left< right){
            if(numbers[left] + numbers[right] == target){
                return {left+1, right+1};
            }

            else if(numbers[left] + numbers[right]  > target){
                right--;
            }

            else left++;
        }
        return {-1,-1};
        //Time complexity-O(n) S.C - O(1);

    }
};