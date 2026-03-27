class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //hashmap to store the freq of all elements
        // int n=nums.size();
        // unordered_map<int,int> mp; // O(n)

        // for(int i=0; i<n; i++){
        //     mp[nums[i]]++;
        // }
        /*nums = [1,1,1,2,2,3]
        1 appears 3 times → keep only 2
        2 appears 2 times → keep both
        3 appears 1 time  → keep it*/

        //rebuild array
        // int idx = 0;
        /*for(auto it:mp){
            int val = it.first; //element
            int freq = it.second; //frequency

            //add element min(freq,2) times
            int times = min(freq,2);

            

            for(int i=0; i<times; i++){
                nums[idx++] = val;
            }
        }*/
        // return idx; // new length
        //Time Complexity - O(n) Space Complexity - O(n)

        //optimal approach with two pointers O(n) and space-O(1).

        int n=nums.size();
        if(n<=2) return n; //edge case

        int i=2; //slow pointer -> builds result
        for(int j=2; j<n; j++){ //fast pointer ->scans
            if(nums[j]!=nums[i-2]){
                nums[i]=nums[j]; //include element
                i++;
            }
        }
        return i;


    }
};