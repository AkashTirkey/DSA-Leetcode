class Solution {
public:
    bool isAnagram(string s, string t) {
        //2 strings are anagram of each other, when their frequencies match and their 
        // for(int i=0; i<s.size(); i++){
        //     int countS = 0;
        //     int countT = 0;
        //     for(int j=0; j<t.size(); j++){
        //         if(s[i] == s[j]) countS++;
        //         if(t[j] == s[i]) countT++;
        //     }

        //     if(countS!=countT) return false;
        // }
        // return true;


        //optimised approach
        unordered_map<char,int> mp1;
        // unordered_set<char> st2;

        for(int i=0; i<s.size(); i++){
            mp1[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            mp1[t[i]]--;
        }

        for(auto it:mp1){
            if(it.second!=0) return false;
        }
        return true;
        //T.C - O(n) S.C-O(n)
    }
};