class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = 0;
        while(word[idx]!=ch && idx < word.size()){
            idx++; 
            }
        
        //if character not found return original string.
        if(idx == word.size()){
            return word;
        }

        

            int left = 0;
            int right = idx;

            while(left<right){
                swap(word[left], word[right]);
                left++;
                right--;
            }

            return word;
    }
};