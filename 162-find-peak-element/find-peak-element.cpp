class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //brute force approach time complexity - O(n);
        int idx = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]> nums[i-1]){
                idx = i;
            }
         }
         return idx;

         //optimal approach - binary search Time complexity - O(logn)
    }
};