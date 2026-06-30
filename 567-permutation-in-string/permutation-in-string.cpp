class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // int k=s1.size();

        // //frequency map for s1
        // unordered_map<char,int> mp1;
        // for(int i=0; i<k; i++){
        //     mp1[s1[i]]++; //a->1 b->1
        // }

        // for(int i=0; i<s2.size()-k; i++){
        //     //create new hashmap for each substring
        //     unordered_map<char,int> mp2;
        //     for(int j=i; j<i+k; j++){
                
        //         //Count frequncy of characters in substring
        //         mp2[s2[j]]++;
                
        //         //compare it with mp1
        //         if(mp1 == mp2) return true;
        //     }
        // }
        // return false;

        // T.C - O(k) + O(n*k) 
        // S.C - O(n)

        //optimal solution using sliding window
        unordered_map<char,int> mp1;
        for(int i=0; i<s1.size(); i++){
            mp1[s1[i]]++;
        }

        // step2: create first window in s2
        unordered_map<char,int> mp2;
            int left = 0;
            for(int right = 0; right<s2.size(); right++){
                mp2[s2[right]]++; //add new char
                

                //window size check
                if(right-left + 1 > s1.size()){
                    mp2[s2[left]]--;
                    if(mp2[s2[left]] == 0){
                        mp2.erase(s2[left]);
                    }
                    left++;

                }
                    //compare both maps
                    if(mp1 == mp2) return true;
            }

            return false;
    }
};