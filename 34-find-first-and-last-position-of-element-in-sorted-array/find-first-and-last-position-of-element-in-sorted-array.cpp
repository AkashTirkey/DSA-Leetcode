class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //Brute force approach - Time complexity - O(n) Space Complexity - O(1)
        int first = -1,last = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target) {
                if(first == -1) first = i; //set first only once
                 last = i; //always update last
            }
        }
         return {first,last}; 
    }
};