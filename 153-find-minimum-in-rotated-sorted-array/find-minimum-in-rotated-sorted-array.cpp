class Solution {
public:
    int findMin(vector<int>& nums) {
        //brute force approach with t.c-O(n^2)
        int n = nums.size();
        int ele = nums[0];
        for(int i=1; i<n; i++){
            for(int j=1; j<n; j++){
                if(nums[j] < ele) {
                    ele = nums[j];
                }
            }
        }
        return ele;
        
    }
};