class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //brute force approach with T.C - O(n^2).
        // int output = 0;
        // for(char c : stones){
        //     for(char k : jewels){
        //         if(c == k) output++;
        //     }
        // }
        // return output;
        //Time complexity - O(n^2) Space complexity - O(1).

        //Optimised approach with T.C - O(n)?
        //using hashmap

        unordered_set<char> jewelSet(jewels.begin(), jewels.end());

        int count = 0 ;
        for(char c: stones){
            if(jewelSet.count(c)){
                count++;
            }
        }
        return count;
        //Time Complexity -O(n) space Complexity -O(n).

    }
};