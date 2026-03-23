class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int maxSum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j = i; j<nums.size(); j++){
                sum+=nums[j];
                maxSum = max(maxSum,sum);
            }
        }
        return maxSum;*/
        //time complexity - O(n^2);

        //optimal approach with kadane's algo 

        //maintain a currentSum variable if the sum becomes < 0 make currentSum = 0 and      store maxSum in every iteration.
        int maxSum = INT_MIN;
        int currentSum = 0;

        for(int i=0; i<nums.size(); i++){
            currentSum+=nums[i];

            maxSum = max(maxSum,currentSum);
            if(currentSum < 0) currentSum = 0;
        }

        return maxSum;

    }
};