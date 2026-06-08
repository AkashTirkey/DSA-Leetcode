class Solution {
public:
    void swap(vector<char>&s,int l,int r){
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = n-1;

        while(left<right){
            swap(s,left,right);
            left++;
            right--;
        }
    }
};