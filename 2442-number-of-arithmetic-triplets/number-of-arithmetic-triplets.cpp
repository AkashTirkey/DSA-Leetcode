class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        //conditions are i<j<k 
        int n = nums.size();
        int triplets = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(nums[k] - nums[j] == diff && nums[j] - nums[i] == diff){
                        triplets++;
                    }
                }
            }
        }
        return triplets;
        //Time complexity - O(n^3) space complexity - O(1).
    }
};