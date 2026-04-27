class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int diff = 0;
        for(int i=0; i<s.size(); i++){
            for(int j = 0; j<t.size(); j++){
                if(t[j]==s[i]){
                    diff+=abs(i-j);
                }
            }
        }
        return diff;
        //Time complexity - O(n^2) space complexity - O(1)
    }
};