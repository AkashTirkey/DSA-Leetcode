class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_set<char> st(allowed.begin(), allowed.end());
        
        
        for(string& word: words){
            bool consistent = true;
            for(char c:word){
                if(st.find(c) == st.end()) { //check each character
                    consistent = false;
                    break;
                }
            }

            if(consistent) count++;
        }
        return count;
        //Time Complexity - O(n) Space complexity - O(1)
    }
};