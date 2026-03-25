class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        //brute force - T.C - O(n)
        vector<int> ans;
       //skip first and last element, loop from 1st to n-1 element only
       for(int i=1; i<mountain.size()-1; i++){
        if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]){
            ans.push_back(i);
        }
       }

       return ans;
    }
};