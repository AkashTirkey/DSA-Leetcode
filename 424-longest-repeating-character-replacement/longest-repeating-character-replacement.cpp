class Solution {
public:
    int characterReplacement(string s, int k) {
        //brute force approach
       /* int n=s.size();
        int ans=0;

        for(int i=0; i<n; i++){
            unordered_map<char,int> mp;
            int maxFreq = 0;
            for(int j=i; j<n; j++){
                mp[s[j]]++;
                maxFreq = max(maxFreq , mp[s[j]]);

                int window = j-i+1;

                if(window-maxFreq <=k){
                    ans = max(ans,window);
                }
                else{
                    break; //move to next i
                }
            }
        }
        return ans;*/
        //T.C=O(n^2)


        //optimal solution with T.c=O(n)
        vector<int> freq(26,0);

        int left = 0;
        int maxFreq = 0;
        int ans=0;

        for(int right = 0; right<s.size(); right++) {
            freq[s[right] -'A']++;

            maxFreq = max(maxFreq, freq[s[right]- 'A']);

            int windowSize = right-left +1;

            if(windowSize - maxFreq > k){
                freq[s[left]- 'A']--;
                left++;
            }

            ans = max(ans,right-left+1);
        }
        return ans;

    }
};