class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //  [1,2,3,1] o/p- true

        // bool flag = false;
        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[j] == nums[i]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        //T.C - O(n^2)  S.C - O(1).

        //optimal approach using hashset
        unordered_set<int> st;
        // for(int num:nums){
        //     st.insert(num);
        // } //T.C - O(n).

        for(int i = 0; i<nums.size(); i++){
            if(st.count(nums[i])){
                return true;
            }
            else st.insert(nums[i]);
        }
        return false;

        //T.C - O(n) S.C- O(n); via trade off.
        
    }
};