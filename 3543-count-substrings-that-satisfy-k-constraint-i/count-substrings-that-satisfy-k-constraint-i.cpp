class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        // int n = s.size();
        // int res = 0;
        // for(int i=0; i<n; i++){
        //     int count0 = 0;
        //     int count1 = 0;
        //      for(int j=i; j<n; j++){
        //         if(s[j] == '0') count0++;
        //         else count1++;

        //         if(count0>k && count1>k) break;
        //         res++;
        //      }
        // }
        // return res;
        //time complexity - O(n^2);

        //optimal soluition with sliding window
        int n = s.size();
        int left = 0;
        int res = 0;
        int count0 = 0;
        int count1 = 0;
        for(int right = 0; right<n; right++){

            if(s[right] == '0')count0++;
            else count1++;

            //shrink window if both exceed k
            while(count0 > k && count1 > k){
                if(s[left] == '0') count0--;
                else count1--;
                left++;
            }
            
            res+= (right-left +1);
        }
        return res;
        //time complexity - O(n) space complexity - O(1)
    }
};