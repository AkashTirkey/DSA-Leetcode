class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0; i<words.size(); i++){
            for(char ch : words[i]){ //traversing each character
                if(ch == x){
                  ans.push_back(i);  
                break; //stop once found
                } 
            }
        }
        return ans;
    }
};