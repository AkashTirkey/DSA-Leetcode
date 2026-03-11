class Solution {
public:
    string removeDuplicates(string s) {
        //brute force Time complexity-O(n^2);
        /*bool found = true; 

        while(found){
            found = false;

            for(int i=0; i<s.size()-1; i++){
                if(s[i] == s[i+1]){
                    s.erase(i,2);
                    found=true;
                    break;
                }
            }
        }
    return s;*/

    //optimal solution with T.C & S.C=O(n)
    stack<char> st;

    for(int i=0; i<s.size(); i++){
        
        if(!st.empty() && st.top() == s[i]){
            st.pop(); //remove duplicate
        }
        else{
            st.push(s[i]);
        }
    }

    string ans = "";
    while(!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
    
    }
};