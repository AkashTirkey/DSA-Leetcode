class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int finalVal = 0;
        int n = operations.size();
        for(int i=0; i<n; i++){
            if(operations[i] == "++X" || operations[i]=="X++" ) finalVal++;
            else finalVal--;
        }
        return finalVal;
        //Time complexity-O(n) Space complexity - O(1);
    }
};