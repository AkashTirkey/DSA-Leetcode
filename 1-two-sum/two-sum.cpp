class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[j] + nums[i] == target) {
                    return {i,j};
                }
            }
        }
        return {-1,-1}; */
        //Time complexity - O(n^2) space complexity - O(1);

        //optimal solution with hashmap to store value:index
        unordered_map<int,int> mp;
        int n=nums.size();
       for(int i=0; i<n; i++){
        int complement = target - nums[i];

        //check if complement already exists in the map
        if(mp.find(complement)!= mp.end()){
            return {mp[complement],i};
        }

        mp[nums[i]] = i;
       }
       return {-1,-1};
       //time complexity - O(n) space complexity - O(n^2)
    }
};