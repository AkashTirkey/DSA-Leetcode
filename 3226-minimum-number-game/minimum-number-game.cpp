class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr; //empty arr for storing elements.
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i+=2){
            for(int j=i+1; j<nums.size(); j++){
                arr.push_back(nums[j]);
                arr.push_back(nums[i]);
                break;
            }
        }
        return arr; 
        //T.C - O(nlogn) + O(n^2) S.c - O(n);
        
        //optimised approach
        // sort(nums.begin(), nums.end()); //O(nlogn);

        // for(int i=0; i<nums.size(); i+=2){
        //     swap(nums[i],nums[i+1]);
        // }
        // return nums;
        // //T.C - O(n) S.C-O(1).
    }
};