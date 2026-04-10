class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxSum = INT_MIN;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     int currentSum = 0;
        //     for(int j=i; j<n; j++){
        //         currentSum+=nums[j];

        //         //edge case
        //         if(currentSum == 0) break;

        //         maxSum = max(maxSum,currentSum);
        //     }
        // }
        // return maxSum;
        //T.C = O(n^2) & S.C = O(1);

        //optimal approach using sliding window ❌ kadane's algorithm✅
        int maxSum = INT_MIN; 
        int currentSum = 0;

        for(int i=0; i<nums.size(); i++){
            currentSum+=nums[i];

            maxSum = max(currentSum, maxSum);
            if(currentSum < 0) currentSum = 0;


        }
        return maxSum;

        //T.C - O(n) & S.C-O(1).
    }
};