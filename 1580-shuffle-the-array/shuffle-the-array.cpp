class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //use of 2 pointer to create a new array
        int left = 0;
        int right = n;
        vector<int> ans;

        while(left<n){
            ans.push_back(nums[left]);
            ans.push_back(nums[right]);
            left++;
            right++;
        }
        return ans;
    }
};