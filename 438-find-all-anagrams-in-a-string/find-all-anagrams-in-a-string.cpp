class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int k = p.size();

        //frquency of p
        vector<int> freqP(26,0);
        for(char c:p){
            freqP[c-'a']++;
        }

        //check every substring of size k
        for(int i=0; i<=n-k; i++){
            vector<int> freqS(26,0);

            //build frequency for current window
            for(int j=i; j<i+k; j++){
                freqS[s[j] - 'a']++;
            }

            //compare
            if(freqS == freqP){
                ans.push_back(i);
            }
        }

        return ans;
        //Time Complexity - O(n*k) Space Complexity- O(n);
    }
};