class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
                
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};
        //Time complexity - O(N^2) Space Complexity - O(1);

        //Optimal Approach using hashmap
        unordered_map<int,int> mp;
        
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]] = i;
        // // 2 ->0 
        // // 7->1
        // // 11->2
        // // 15->3
        // } 

        for(int i=0; i<nums.size(); i++){
            int complement = target-nums[i];

            if(mp.count(complement)){
                return {i,mp[complement]};
            }

            else mp[nums[i]] = i;
        }
    return {-1,-1};
    }
    //T.C - O(n) S.C - O(n)
};