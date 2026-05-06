class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // vector<int> ans;
        // for(int i=0; i<nums.size(); i++){
        //     int count=0;
        //     for(int j=0; j<nums.size(); j++){
        //         if(nums[j]<nums[i]){
        //             count++;
        //         }
        //     }
        //     ans.push_back(count);
        // }
        // return ans;
        //Time Complexity-O(n^2) Space Complexity - O(n).

        //optimised approach with mapping + sorting
        vector<int> temp = nums;
        sort(temp.begin(), temp.end()); //O(nlogn)

        unordered_map<int,int> mp;
        for(int i=0; i<temp.size(); i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]] = i;
            }
        }

        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(mp[nums[i]]);
        }
        return ans;
        //Time Complexity- O(nlogn) Space complexity - O(n).
    }
};