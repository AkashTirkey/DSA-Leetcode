class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //brute force approach
        //a b c a b c b b
        int maxLen = 0;
        for(int i=0; i<s.size(); i++){
            unordered_set<char> st;//S.c- O(n).
            for(int j=i; j<s.size(); j++){
                if(st.count(s[j])){
                    break;
                }
                maxLen = max(maxLen,j-i+1);
                st.insert(s[j]);
            }
        }
        return maxLen;

        //T.C- O(n^2) S.C - O(n).
    }
};