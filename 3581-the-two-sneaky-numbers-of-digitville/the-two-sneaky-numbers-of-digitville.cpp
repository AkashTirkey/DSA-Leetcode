class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // vector<int> ans;
        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i] == nums[j]) ans.push_back(nums[i]);
        //     }
        // }
        // return ans;
        //TIme complexity - O(n^2) Space complexity - O(n);

        //optimised Approach
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
        //Time Complexity - O(n) Space Complexity - O(n);

    }
};