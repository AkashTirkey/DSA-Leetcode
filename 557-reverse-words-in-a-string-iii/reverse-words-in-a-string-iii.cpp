class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int n = s.size();

        for(int i=0; i<=n; i++){

            //when we hit space or reach the end 
            if(i==n || s[i]==' '){
                int left = start;
                int right = i-1;

                //reverse current word
                while(left<right){
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                //move to next word.
                start = i+1;
            }

        }
        return s;
    }
};