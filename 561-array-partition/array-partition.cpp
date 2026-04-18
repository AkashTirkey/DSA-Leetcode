class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); //T.C - O(nlogn);
    // eg - INPUT- 1 2 2 5 6 6
    int val=0;
    for(int i=0; i<nums.size()-1; i+=2){
        for(int j=i+1; j<nums.size(); j++){
            val+= min(nums[i],nums[j]);
            break;
        }
    }
    return val;

    }
};