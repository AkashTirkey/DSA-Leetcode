class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //brute force approach with time complexity - O(n^2).
        /*int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[j] ==  nums[i] && abs(i-j) <=k) return true;
            }
        }
        return false;*/

        //optimal approach using hashset
        unordered_set<int> st;
        int n=nums.size();
        for(int i = 0; i<n; i++){
            if(st.count(nums[i])){
                return true;
            }

            st.insert(nums[i]);

            if(st.size()>k){
                st.erase(nums[i-k]);
            }
        }
        return false;

    }
};