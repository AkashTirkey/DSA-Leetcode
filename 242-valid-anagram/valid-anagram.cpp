class Solution {
public:
    bool isAnagram(string s, string t) {
        // for(int i=0; i<s.size(); i++){
        //     int countS = 0;
        //     int countT=0;
        //     for(int j=0; j<s.size(); j++){
        //         if(s[j] == s[i]) countS++;
        //         if(t[j] == s[i]) countT++;
        //     }
        //     if(countS!=countT) return false;
        // }
        // return true;

        //optimal approach using hashmap or array
        if(s.size()!= t.size()) return false;
        int freq[26] = {0};
        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i=0; i<26; i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};