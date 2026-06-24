// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1,right=n;
        int ans =-1;

        while(left<=right){
            int mid = left + (right-left)/2;

            bool version = isBadVersion(mid);

            if(version == false){
                left=mid+1;
            }

            else{
                 ans = mid;
                right = mid -1;
            }

        }
    return ans;
    //Time complexity - O(logn) Space complexity - O(1).
    }
};