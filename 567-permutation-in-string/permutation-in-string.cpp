class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       /* int k = s1.size();
        unordered_map<char,int> mp1;
        
        //frequency map for s1
        for(int i=0; i<k; i++){
            mp1[s1[i]]++;
        }
        

        //check if mp1 is present in s2
        for(int i=0; i<=s2.size()-k; i++){
            //create new hashmap for new elements of k size
            unordered_map<char,int> mp2;
            for(int j=i; j<i+k; j++){
                mp2[s2[j]]++;
                }
                if(mp1 == mp2){
                    return true;
                }
            }

        return false; // T.C-O(n) + O(n+k)*/

        //optimal solution sliding window
        int k = s1.size();
        unordered_map<char,int> mp1;

        for(int i=0; i<k; i++){
            mp1[s1[i]]++;
        }

        unordered_map<char,int> mp2;
        int left = 0;
        for(int right=0; right<s2.size(); right++){
           mp2[s2[right]]++; // add new char

           //window size check
           if(right - left + 1 > k){
                mp2[s2[left]]--;
                if(mp2[s2[left]] == 0){
                    mp2.erase(s2[left]);
                }
                left++;
           }

           //compare both maps
           if(mp1 == mp2) return true;
            
            }
        return false; //T.c - O(n);
        


    }
};