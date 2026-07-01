class Solution {
public: 
    //     bool isAnagram(string s1, string s2) {
    //         if(s1.size()!= s2.size()) return false;

    //         sort(s1.begin(), s2.end());
    //         sort(s2.begin(), s2.end());

    //         return s1 == s2;
    //     }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     int n=strs.size();
    //     vector<bool> visited(n,false);
    //     vector<vector<string>> ans;


    //     for(int i=0; i<n; i++){
    //         if(visited[i]) continue;

    //         vector<string> group;

    //         group.push_back(strs[i]);
    //         visited[i] = true;

    //         for(int j=i+1; j<n; j++){
    //             if(visited[j]) continue;

    //             //check whether two are anagrams of each other
    //             if(isAnagram(strs[i],strs[j])) {
    //                 group.push_back(strs[j]);
    //                 visited[j] = true;
    //             }
    //         }

    //         ans.push_back(group);
    //     }
    //     return ans;



    //optimal approach
    unordered_map<string, vector<string>> mp;

    for(string str : strs){

        string temp = str;
        sort(temp.begin(), temp.end());

        mp[temp].push_back(str);
    }

    vector<vector<string>> ans;
    
    for(auto it: mp){
        ans.push_back(it.second);
    }

        return ans;
//         Time Complexity

// Let:

// n = number of strings
// k = average length of each string

// For every string:

// Copy string → O(k)
// Sort string → O(k log k)
// Insert into HashMap → O(k) (hashing the key)
        //T.C - O(n *klogk) S.C - O(n*k)
    }
};