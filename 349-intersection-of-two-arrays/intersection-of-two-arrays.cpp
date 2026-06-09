class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // int n = nums2.size();
        // vector<int> ans;
        // unordered_set<int> st;

        // for(int i=0; i<nums1.size(); i++){
        //     for(int j=0; j<nums2.size(); j++){
        //         if(nums2[j] == nums1[i]){
        //             st.insert(nums2[j]);
        //         }
        //     }
        // }

        //pushing st elements to ans vector
        // for(int num : st){
        //     ans.push_back(num);
        // }

        // return ans;
        //T.C = O(n^2)  S.C -O(k); i.e k is the number of unique elements.

        //optimised approach with O(n) T.C
        unordered_set<int> st1; //O(n).
        unordered_set<int> st2; //O(m).

        for(int num:nums1){
            st1.insert(num);
        }

        for(int num:nums2){
            st2.insert(num);
        }

        vector<int> ans;
        for(int num:st1){
           if(st2.count(num)){
                ans.push_back(num);
            }
        }
        return ans;
        //time complexity - O(n+m) & space complexity - O(n+m)



    }
};