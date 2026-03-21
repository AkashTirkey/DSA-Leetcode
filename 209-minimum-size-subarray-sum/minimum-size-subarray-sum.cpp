class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //T.C = O(n^2) brute force
        // int minLen = INT_MAX;
        // for(int i=0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum+= nums[j];

        //         if(sum >= target){
        //             minLen = min(minLen , j-i+1);
                         // break;
        //         }
        //     }
        // }
        // if(minLen == INT_MAX) return 0;
        // else return minLen;

        //Optimal Approach with sliding window

        int left = 0;
        int minLen = INT_MAX;
        int sum = 0;
        for(int right = 0; right<nums.size(); right++){
            sum+=nums[right];
            while(sum >= target){
                //update the minLength
                minLen = min(minLen,right-left+1);
                //decreement the left ele from sum
                sum-=nums[left];
                //increase the left pointer
                left++;
            }

        }

        if(minLen == INT_MAX) return 0;
        else return minLen;


    }
};