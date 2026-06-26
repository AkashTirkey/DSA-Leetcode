class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> freq;

        for(int i=0; i<nums.size(); i++){
            bool alreadyProcessed = false;
            for(int p=0; p<i; p++){
                if(nums[p] == nums[i]){
                    alreadyProcessed = true;
                    break;
                }
            }
                if(alreadyProcessed) continue;

                int frequency = 0;

                //T.C - O(m*n)
                for(int j=0; j<nums.size(); j++){
                    if(nums[j] == nums[i]) {
                        frequency++;
                    }
                }
            
                freq.push_back({frequency,nums[i]});
        }

            //sorting in descending order
        sort(freq.begin(), freq.end(), greater<pair<int,int>>()); //O(m log m)

        vector<int> ans;

        //take first 2 elements 
        for(int i=0; i<k; i++){
            ans.push_back(freq[i].second);
        }

        return ans;
        //Time Complexity - O(n^2 + mlogm) where m is the unique element

    }
};