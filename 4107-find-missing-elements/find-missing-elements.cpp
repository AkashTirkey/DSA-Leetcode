class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;
        int minEle = *min_element(nums.begin(),nums.end());
        int maxEle = *max_element(nums.begin(),nums.end());

        for(int num:nums) {
                st.insert(num);
        }
        vector<int> ans;

        for(int i=minEle; i<=maxEle; i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        return ans;

    }
};