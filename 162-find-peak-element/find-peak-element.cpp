class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //brute force approach time complexity - O(n);
        /*int idx = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]> nums[i-1]){
                idx = i;
            }
         }
         return idx;*/

         //optimal approach - binary search Time complexity - O(logn)
         int n = nums.size();
        int left = 0;
        int right = n - 1;

        while(left < right){
            int mid = left + (right - left) / 2;

            if(nums[mid] < nums[mid+1])
                left = mid + 1;   // peak on right
            else
                right = mid;      // ← mid not mid-1 !
                }
            return left;  // left == right == peak 
}
};