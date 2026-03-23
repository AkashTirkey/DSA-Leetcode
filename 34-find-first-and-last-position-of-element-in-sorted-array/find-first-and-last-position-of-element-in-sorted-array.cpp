class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //Brute force approach - Time complexity - O(n) Space Complexity - O(1)
        /*int first = -1,last = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target) {
                if(first == -1) first = i; //set first only once
                 last = i; //always update last
            }
        }
         return {first,last}; */

         //optimal Solution with time complexity - O(logn)
        int n = nums.size();
        vector<int> ans(2,-1);
        int left = 0;
        int right = n-1;

        while(left<=right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target) {
                ans[0] = mid; //found first occurence .
                right = mid-1; //go to left and check.
            }

            else if(nums[mid] < target){
                left = mid+1;
            }
            else right = mid-1;
        }

        //find last occurrence
        left = 0, right = n-1;
        while(left<=right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target){
                ans[1] = mid;
                left = mid+1;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }

        return ans;
    }
};