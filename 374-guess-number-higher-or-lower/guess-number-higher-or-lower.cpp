/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1,right=n;

        while(left <= right){
            int mid  =left+ (right - left)/2;

            //call guess api
            int result = guess(mid);

            if(result == 0){
                return mid;
            }

            //if guess number is higher than the pick , search left half
            else if(result == -1){
                right = mid-1;
            }
            
            //if not search right half
            else{
                left = mid+1;
            }
        }
        return -1;

        //Time Complexity -O(logn) Space Complexity - O(1).
    }
};