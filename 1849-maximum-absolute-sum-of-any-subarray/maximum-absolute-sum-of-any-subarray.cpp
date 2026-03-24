class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //brute force approach with T.C-O(n^2)
        // int maxSum = INT_MIN;
        // for(int i= 0; i<nums.size(); i++){
        //     int currentSum=0;
        //     for(int j=i; j<nums.size(); j++){
        //         currentSum+=nums[j];
        //         maxSum = max(maxSum, abs(currentSum));
        //     }
        // }
        // return maxSum;

        //optimal approach with kadane's Algo Time complexity - O(n).
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        int currentSum = 0;
        for(int i=0; i<nums.size(); i++){
            currentSum+=nums[i];
            maxSum=max(maxSum,currentSum);

            if(currentSum<0) currentSum=0;
        }

        currentSum = 0;
        for(int i=0; i<nums.size(); i++){
            currentSum+=nums[i];

            minSum = min(minSum,currentSum);

            if(currentSum>0) currentSum=0;
        }

        return max(maxSum, abs(minSum));
        
    }
};