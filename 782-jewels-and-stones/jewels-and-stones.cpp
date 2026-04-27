class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int output = 0;
        for(char c : stones){
            for(char k : jewels){
                if(c == k) output++;
            }
        }
        return output;
        //Time complexity - O(n^2) Space complexity - O(1).
    }
};