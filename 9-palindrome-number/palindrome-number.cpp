class Solution {
public:
    bool isPalindrome(int x) {
        /*if(x<0) return false;
        string s = to_string(x);

        int left = 0;
        int right = s.size()-1;

        while(left<right){
            if(s[left]!=s[right]){
            return false;
            }
            left++;
            right--;
        }

        return true; */
        //time complexity-O(n) space complexity-O(n);

        //optimal approach

        if(x<0) return false;
        int original = x;
        long long reverse = 0;

        while(x>0){
            int digit = x % 10;
            reverse = reverse*10 + digit;
            x = x/10;
        }

        return original == reverse;

        //time complexity - O(logn) space complexity - O(1)

    }
};