class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                arr.push_back(i);
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                arr.push_back(i);
                break;
            }
        }
        if(arr.empty()){
            return {-1,-1};
        }
   
        return arr;
        
    }
};