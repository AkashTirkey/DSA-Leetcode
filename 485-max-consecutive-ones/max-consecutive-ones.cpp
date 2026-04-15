class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxSum = 0;
        int currentSum = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                currentSum++;
                maxSum = max(maxSum,currentSum);
            }
            else{
                currentSum=0;
            }
        }
        return maxSum;   
    }
};