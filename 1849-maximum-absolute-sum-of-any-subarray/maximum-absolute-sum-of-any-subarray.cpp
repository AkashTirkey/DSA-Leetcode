class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //brute force approach
        /*int maxSum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j=i; j<nums.size(); j++){
                sum+=nums[j];

                maxSum = max(maxSum, abs(sum));
            }
        }
        return maxSum;//time complexity - O(n^2)*/

        //optimal approach with kadane's algo
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        int currentSum = 0;

        for(int i=0; i<nums.size(); i++){
            currentSum+=nums[i];
            maxSum = max(maxSum , currentSum);
            if(currentSum < 0) currentSum = 0; //reset if sum becomes negative

        }


        //kadane's algo inverted 
        currentSum = 0; //reset for minSum
        for(int i=0; i<nums.size(); i++){
            currentSum+=nums[i];
            minSum = min(minSum, currentSum);

            if(currentSum > 0) currentSum = 0; //reset if sum becomes positive
        }

        return max(maxSum, abs(minSum));
    }
};