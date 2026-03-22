class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //brute force approach with Time complexity - O(n^2) 
        int n=nums1.size();
        int m=nums2.size();
       /* unordered_set<int> st; //to avoid duplicates

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums2[j] == nums1[i]){
                    st.insert(nums1[i]);
                    break;
                }
            }
        }

        return vector<int>(st.begin(), st.end());*/

        //optimal approach using hashset and T.C= O(n)
        unordered_set<int> st1; //to store the elements of nums1
        unordered_set<int> st2; //to store the final elements

        for(int i=0; i<n; i++){
            st1.insert(nums1[i]);
        }

        for(int i=0; i<m; i++){
            if(st1.find(nums2[i])!=st1.end()){
                st2.insert(nums2[i]);
            }
        }

        return vector<int>(st2.begin(), st2.end());
    }
};