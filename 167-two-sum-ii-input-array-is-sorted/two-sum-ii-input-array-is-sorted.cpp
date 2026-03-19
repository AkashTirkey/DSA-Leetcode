class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        /*for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(numbers[j] + numbers[i] == target){
                    return {i+1,j+1};
                }
            }
        }
        return {0,0};*/
        //time complxity - O(n^2) space complexity - O(1);

        //optimal approach with Two pointers
        int left = 0;
        int right = n-1;
        while(left < right){
            if(numbers[left] + numbers[right] == target){
                return {left+1, right+1};
            }

            else if(numbers[left] + numbers[right] > target){
                right--;
            }
            else {
                left++;
            }
        }
        return {0,0};
        //Time complexity - O(n) space complexity - O(1)
    }
};