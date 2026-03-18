class Solution {
public:
    int firstUniqChar(string s) {
        //brute force approach - O(N^2)
        // for(int i=0; i<s.size(); i++){
        //     int count = 0;
        //     for(int j=0; j<s.size(); j++){
        //         if(s[j]==s[i]){
        //             count++;
        //         }
        //     }
        //     if(count == 1) return i;
        // }
        // return -1;

        //optimal approach with T.C-O(n)
        vector<int> freq(26,0);

         //first pass: Count frequencies
        for(char c:s){
            freq[c-'a']++; //store the frquency 
        }
        //second pass: find first unique character
        for(int i=0; i<s.size(); i++){
            if(freq[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
        //we used vectors instead of map because in the problem it states that only              lowercase letters are allowed , for fixed and known range arrays > hashmap.
    }
};