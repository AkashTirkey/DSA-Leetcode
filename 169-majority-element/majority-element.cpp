class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // int el = 0;
        // for(int i=0; i<n; i++){
        //     int count = 0;
        //     for(int j=0; j<n; j++){
        //         if(nums[j] == nums[i]){
        //             // el = nums[i];
        //             count++;
        //         }
        //     }
        //     if(count > n/2){
        //         return nums[i];
        //     }
        // }
        // return -1; //time complexity - O(n^2)

        //optimal approach using hashmap with Time complexity of O(n) and space complexity - O(n)
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(int i=0; i<n; i++){
            if(mp[nums[i]] > n/2){
                return nums[i];
            }
        }
        return -1;
    }
};