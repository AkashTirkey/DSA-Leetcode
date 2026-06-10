class Solution {
public:
    bool isValid(char ch){
    return ((ch >= 'a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'));
    }
    bool isPalindrome(string s) {
        int n=s.size();
        int left = 0;
        int right = n-1;

        while(left<right){
            
            if(!isValid(s[left])){
                left++;
                continue;
            }

            if(!isValid(s[right])) {
                right--;
                continue;
            }

            if(tolower(s[left])!=tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }
        return true;

        //T.C - O(n) S.C - O(1)
    }
     
};