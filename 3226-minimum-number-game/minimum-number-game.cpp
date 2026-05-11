class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // vector<int> arr; //empty arr for storing elements.

        sort(nums.begin(), nums.end()); //O(nlogn);

        for(int i=0; i<nums.size(); i+=2){
            swap(nums[i],nums[i+1]);
        }
        return nums;
        //T.C - O(n) S.C-O(1).
    }
};