class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> arr3;

        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot){
                arr1.push_back(nums[i]); //9,5,3
            }
            else if(nums[i] == pivot) arr2.push_back(nums[i]); //10, 10
            else{
                arr3.push_back(nums[i]); //12,14
            }
        }

        

        int i=0,j=0,k=0;
        while(i<arr1.size()){
            res.push_back(arr1[i]);
            i++;
        }
        while(j<arr2.size()){
            res.push_back(arr2[j]);
            j++;
        }

        while(k<arr3.size()) {
            res.push_back(arr3[k]);
            k++;
        }
        return res;
    }
};