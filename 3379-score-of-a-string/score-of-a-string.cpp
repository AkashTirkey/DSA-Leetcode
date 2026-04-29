class Solution {
public:
    int scoreOfString(string s) {
        int finalVal = 0;
        for(int i=0; i<s.size()-1; i++){
            finalVal+=abs(s[i]-s[i+1]);
        }
        return finalVal;
    }
};