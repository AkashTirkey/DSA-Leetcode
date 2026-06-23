class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //binary search
        int n=letters.size();
        int left = 0, right=n-1;

        while(left <= right){
            int mid = left + (right-left)/2;

            //if mid is greater than left , search left half
            if(letters[mid] > target){
                right = mid-1;
            }
            //otherwise search right half
            else left = mid+1;
        }

        //if nothing found then wrap around
         return letters[left % n];
         //T.C - O(logn).
         //S.C - O(1)
    }
};