class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;

        for(int num:nums1){
            st1.insert(num);
        }

        for(int num:nums2){
            st2.insert(num);
        }

        vector<int> ans(2,0);

        for(int x:nums1){
            ans[0]+=st2.count(x);
        }

        for(int z : nums2){
            ans[1]+=st1.count(z);
        }

        return ans;
        //time complexity - O(n+m) space complexity-O(n+m)
    }
};