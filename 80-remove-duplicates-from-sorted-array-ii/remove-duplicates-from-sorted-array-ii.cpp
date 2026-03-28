class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute force approach


      //optimal approach using two pointers - O(n) and space complexity - O(1).
      int n=nums.size();
      if(n<=2) return n; //edge case
      int i=2; //start with index 2 because first 2 elements are already satisfying the condition.
      for(int j=2; j<n; j++){
        if(nums[j]!=nums[i-2]){
            nums[i] = nums[j];
            i++;
        }
      }

      return i;

    }
};