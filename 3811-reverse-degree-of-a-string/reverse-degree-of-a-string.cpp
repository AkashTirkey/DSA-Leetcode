class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;
          for (int i = 0; i < s.size(); i++) {
        int reverseVal = 'z' - s[i] + 1; // reversed alphabet position
        total += reverseVal * (i + 1);   // (i + 1) because index is 1-based
    }

    return total;
    }
};