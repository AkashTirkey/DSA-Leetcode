class Solution {
public:
    int maxFreqSum(string s) {
        int finalFreq = 0;
            unordered_map<char,int> mp1; //vowels
            unordered_map<char,int> mp2; //consonants

        for(char c:s){

            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                mp1[c]++;
            }
            else{
                mp2[c]++;
            }

        }
            int freq = 0;
            for(auto it:mp1){
             freq = max(freq,it.second);
            }

            int freq2 = 0;
            for(auto it:mp2){
             freq2 = max(freq2,it.second);
            }
            finalFreq = freq + freq2;
        return finalFreq;

        //Time complexity - O(n) Space complexity - O(n)
    }
};