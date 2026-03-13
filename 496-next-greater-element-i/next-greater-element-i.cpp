class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //brute force approach
        // int n=nums1.size();
        // int m=nums2.size();
        // vector<int> ans(n,-1);

        // for(int i=0; i<n; i++){
        //     int idx=-1;
        //     //find nums1[i] in nums2[j];
        //     for(int j=0; j<m; j++){
        //         if(nums2[j] == nums1[i]){
        //             idx=j; //if found store the index of j
        //             break;
        //         }
        //     }

        //     for(int j=idx+1; j<m; j++){
        //         if(nums2[j] > nums1[i]){
        //             ans[i] = nums2[j];
        //             break;
        //         }
        //     }
        // }
        // return ans; //Time Complexity-O(n*m)

        //optimal solution with T.C-O(n+m)
         int m = nums2.size();
    stack<int> st;                  // monotonic decreasing stack
    unordered_map<int, int> mp;     // {element → next greater element}

    // Step 1 - build the map using monotonic stack on nums2
    for(int i = 0; i < m; i++){
        while(!st.empty() && nums2[i] > st.top()){
            mp[st.top()] = nums2[i];  // nums2[i] is next greater for st.top()
            st.pop();
        }
        st.push(nums2[i]);  // push actual value (not index)
    }

    // leftover in stack → no next greater exists
    while(!st.empty()){
        mp[st.top()] = -1;
        st.pop();
    }

    // Step 2 - build ans array using map lookup
    int n = nums1.size();
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = mp[nums1[i]];  // O(1) lookup
    }

    return ans;
    }
};