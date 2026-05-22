class Solution {
public:

    // bool linearSearch(vector<int> &nums , int target){
    //     for(int num:nums){
    //         if(num==target){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    int longestConsecutive(vector<int>& nums) {
        //brute force 
        //nums[]= [100,4,200,1,3,2]
        // int longest = 0;
        // for(int i=0; i<nums.size(); i++){
        //     int x = nums[i];
        //     int count = 1;

        //     while(linearSearch(nums,x+1)){
        //         x = x+1;
        //         count++;
        //     }
        //     longest = max(longest,count);
        // }
        // return longest;
        //Time complexity - O(n^2); ❌

        //better approach with sorting O(nlogn)
        
        sort(nums.begin(), nums.end());

            if(nums.size() == 0) return 0;
        int longest = 1;
        int count = 1;

        //[1 2 3 4 100 200 ]
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;

            else if(nums[i]==nums[i-1]+1){
                count++;
            }
            else count=1;

            longest = max(longest,count);
        }
        return longest;
        //Time complexity - O(nlogn) S.c - O(1);
    }
};