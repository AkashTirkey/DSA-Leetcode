class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //brute force approach with T.C = o(n^2);
        int n=nums.size();
        // int M = 0;
        // for(int i=0; i<n; i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum+=nums[j];

        //         if(sum == k){
        //             M++;
        //         }
        //     }
        // }
        // return M;

        //optimal approach with prefix sum and hashmap
        unordered_map<int,int> mp; //prefixSum -> frequency
        // mp={prefixSum:Frequency}
        mp[0] = 1; //empty subarray has sum 0

        int prefixSum = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            prefixSum+=nums[i];

            //check if (prefixSum-k) exists in map
            if(mp.find(prefixSum-k) != mp.end()){
                count+=mp[prefixSum-k]; //add frequency
            }
            
            mp[prefixSum]++; //store current preixSum
        }
        return count;
        //Time complexity - O(n) & space complexity-O(n) hashmap



    }
};