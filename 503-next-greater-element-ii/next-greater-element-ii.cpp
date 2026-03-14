class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        //brute force approach - O(n^2) & S.c-O(n)
       /* int n=nums.size();
        vector<int> ans(n,-1);

        for(int i=0; i<n; i++){

            for(int j=1; j<n; j++){
                int circularIdx = (i+j)%n; //wrap around
                if(nums[circularIdx] > nums[i]){
                    ans[i] = nums[circularIdx];
                    break;
                }
            }
    
        }

        return ans;*/

        //optimal solution T.c-O(n) S.C-O(n); monotonic circular stack
       int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;  // stores indexes

    for(int i = 0; i < 2*n; i++){
        int idx = i % n;  // circular index

        while(!st.empty() && nums[idx] > nums[st.top()]){
            ans[st.top()] = nums[idx];  // found next greater!
            st.pop();
        }

        if(i < n) st.push(idx);  // only push in first pass
    }
    return ans;


    }
};