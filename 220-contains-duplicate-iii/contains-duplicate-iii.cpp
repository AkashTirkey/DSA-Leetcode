class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        //brute force approach O(n^2)
        /*for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                //check for valid pair
//why long long because - difference of nums[i] and nums[j] could be INT_MAX and INT_MIN their differences could overflow.
                if(abs(i-j)<=indexDiff && abs((long long)nums[i] - nums[j])<=valueDiff) return true;
            }
        }
        return false; //no valid pair found*/

        //optimal approach using ordered set and sliding window
        int n = nums.size();
        set<long long> st;// long long for overflow

        for(int i=0; i<n; i++){
            //check if valid element exists in window
            auto it = st.lower_bound((long long) nums[i] - valueDiff);

            if(it != st.end() && *it <= (long long)nums[i] + valueDiff){
                return true; // found valid pair
            }

            //add current element to window
            st.insert(nums[i]);

            //remove oldest element if window exceeds indexDiff
            if(i >= indexDiff){
                st.erase(nums[i - indexDiff]);
            }
        }
        return false;

    }
};