class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int target) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                arr.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            arr.push_back(nums[i]);
        }
       }
       for(int i=0;i<nums.size();i++){
        if(nums[i]>target){
            arr.push_back(nums[i]);
        }
       }
       return arr;
        
    }
};