class Solution {
public:

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' ||   c=='I' ||  c =='O' || c =='U';
    }
    
    string sortVowels(string s) {
        //seperate string to store vowels
        string vowels;
        for(char c:s){
            if(isVowel(c)){
                vowels.push_back(c);
            }
        }

        //sort them lexicographically
        sort(vowels.begin(), vowels.end());

        //replace vowels from the new string in the old string
        int j = 0;
        for(char &c : s){
                if(isVowel(c)){
                    c = vowels[j++];
                }
        }
        return s;
        //Time complexity -O(n logn)- sorting vowels
        // space - O(n)
    }
};