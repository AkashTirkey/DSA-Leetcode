class Solution {
public:
    string reverseWords(string s) {
          vector<string> words;
    string word = "";

    // Step 1 → extract words (handle multiple spaces!)
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            word += s[i];         // build word
        } else {
            if(word != ""){
                words.push_back(word);  // save word
                word = "";              // reset
            }
        }
    }
    if(word != "") words.push_back(word);  // last word!

    // Step 2 → reverse the vector
    reverse(words.begin(), words.end());

    // Step 3 → join with spaces
    string ans = "";
    for(int i = 0; i < words.size(); i++){
        ans += words[i];
        if(i != words.size()-1) ans += " ";  // no trailing space!
    }
    return ans;
    }
};