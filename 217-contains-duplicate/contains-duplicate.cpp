class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //brute force approach 
        /*for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]==nums[i]) return true;
            }
        }
    return false;*/
    //time complexity - O(n^2) space-O(1)

    //optimal solution with hash set
    unordered_set<int> st;
    for(int i=0; i<nums.size(); i++){
        if(st.find(nums[i])!=st.end()){
            return true;
            break;
        }

        st.insert(nums[i]);
    }
    return false;

    }
};