class Solution {
public:
    int firstUniqChar(string s) {
        // for(int i=0; i<s.size(); i++){
        // int count = 0;
        //     for(int j=0; j<s.size(); j++){
        //         if(s[j] == s[i]) count++;
        //     }

        //     if(count == 1) return i;
        // }
        // return -1;
        //Time complexity - O(N^2) Space complexity - O(1).

        //optimal approach with t.c - O(n)
        vector<int> freq(26,0);

        for(char c:s){
            freq[c-'a']++; //store the frequency.
        }

        //second pass : find first unique chracter
        for(int i=0; i<s.size(); i++){
            if(freq[s[i]- 'a']==1){
                return i;
            }
        }
        return -1;
                //we used vectors instead of map because in the problem it states that only              lowercase letters are allowed , for fixed and known range arrays > hashmap.

    }
};