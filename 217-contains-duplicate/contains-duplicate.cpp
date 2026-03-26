class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] == nums[i]) return true;
            }
        }
        return false; //time complexity - O(n^2)*/

        //optimal approach using hashset
        unordered_set<int> st;
        int n = nums.size();
        for(int i=0; i<n; i++){
            
            //check if element already exists then return true
            if(st.count(nums[i])){
                return true;
            }

            //push the elements into set if not exist in st already
            st.insert(nums[i]);
        }

        return false;

    }
};