class Solution {
public:
    static bool cmp(pair<int,int> &a, pair<int,int> &b){
        //frequency check

        if(a.second == b.second){
            return a.first>b.first;
        }

        return a.second < b.second;
    }

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp; //O(n);

        //count frequency
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        } //O(n)

        vector<pair<int,int>> vp;

        //store number frequency
        for(auto it:mp){
            vp.push_back({it.first,it.second});
        }

        //sort according to conditions
        sort(vp.begin(), vp.end(), cmp);

        vector<int> ans;
        //rebuild array
        for(auto it: vp){
            int num = it.first;
            int freq = it.second;

            while(freq--){
                ans.push_back(num);
            }

        }

        return ans;
        ///Time complexity - O(n) Space complexity -O(nlogn)


    }
};