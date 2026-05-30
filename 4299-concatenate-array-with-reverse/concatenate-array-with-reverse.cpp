class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for(int num:nums){
            ans.push_back(num);
        }

        for(int i=n-1; i>=0; i--){
            ans.push_back(nums[i]);
        }

        return ans;
        //T.C - O(n) S.C - O(n).
    }
};