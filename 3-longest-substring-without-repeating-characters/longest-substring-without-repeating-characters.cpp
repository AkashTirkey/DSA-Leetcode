class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //brute force approach
        //a b c a b c b b
        // int maxLen = 0;
        // for(int i=0; i<s.size(); i++){
        //     unordered_set<char> st;//S.c- O(n).create new set for every i th element
        //     for(int j=i; j<s.size(); j++){
        //         if(st.count(s[j])){
        //             break;
        //         }
        //         maxLen = max(maxLen,j-i+1);
        //         st.insert(s[j]);
        //     }
        // }
        // return maxLen;

        //T.C- O(n^2) S.C - O(n).

        //optimal approach using sliding window
        unordered_set<char> st;

        int left = 0;
        int maxLen = 0;

        for(int right=0; right<s.size(); right++){
            
            while(st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            maxLen = max(maxLen,right-left +1);
        }

        return maxLen;

        //T.C - O(n) S.C - O(n)
    }
};