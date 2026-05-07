class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        // for(int i=0; i<heights.size(); i++){
        //     for(int j=i+1; j<heights.size(); j++){
        //         //if next person is taller
        //         if(heights[j] > heights[i]){
        //             swap(heights[i],heights[j]);

        //             swap(names[i],names[j]);
        //         }
        //     }
        // }
        // return names; 
        //Time complexity - O(n^2) space complexity - O(1).

        //optimsed approach
        vector<pair<int,string>> vp;
        for(int i=0; i<names.size(); i++){
            vp.push_back({heights[i],names[i]});
        }

            //sort in descending order
            sort(vp.rbegin(),vp.rend());

        vector<string> ans;
        for(int i=0; i<vp.size(); i++){
            ans.push_back(vp[i].second);
        }
        return ans;
        //T.C- O(n) S.C-O(n)
    }
};