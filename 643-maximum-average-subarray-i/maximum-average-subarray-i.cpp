class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double maxAvg = INT_MIN;
        // for(int i=0; i<=nums.size()-k; i++){
        //     double sum=0;
        //     double avg=0;
        //     for(int j=i; j<i+k; j++){
        //         sum+=nums[j];
        //     }
        //     avg = sum/k;
        //     maxAvg = max(maxAvg,avg);
        // }

        // return maxAvg;
        //Time complexity - O(n-k)*(k) , space complexity - O(1).

        //optimal solution using sliding window
        
        //store the avg of first k elements and then compare the value in next looop
        int windowSum =0;
        int n = nums.size();
        for(int i=0; i<k; i++){
            windowSum+=nums[i];
        }

        int maxSum = windowSum;
        for(int i=k; i<nums.size(); i++){
            windowSum = windowSum - nums[i - k] + nums[i];

            maxSum = max(maxSum,windowSum);
        }

        return (double)maxSum/k;
        //Time Complexity - O(n) Space complexity - O(1).


    }
};