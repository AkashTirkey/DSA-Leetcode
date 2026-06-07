class Solution {
public:
    bool isAnagram(string s, string t) {
        //2 strings are anagram of each other when 
        //a) They contain the same characters.
        //b) Each character appears the same number of times.
        // int n=s.size();
        // int m=t.size();
        
        // for(int i=0; i<n; i++){
        //     int countS = 0;
        //     int countT = 0;
        //     for(int j=0; j<m; j++){
        //         if(s[j]==s[i]) countS++;
        //         if(t[j]==s[i]) countT++;
        //     }
        //     if(countS!=countT) return false;
        // }
        // return true;
        //Time Complexity - O(n^2) & space complexity - O(1)

        //optimal approach using hashmap
        unordered_map<char,int> mp;

        for(char ch:s){
            mp[ch]++;
        }

        for(char ch:t){
            mp[ch]--;
        }

        for(auto it : mp){
            if(it.second != 0) return false;
        }
        return true;

    }
};