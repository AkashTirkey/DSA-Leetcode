class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = n-1;

        //since it is asked to do in place so two pointers is the best approach for this
        while(left<=right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
};