class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int odd=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0  && nums[i]<odd){
                odd=nums[i];
            }
        }
        if(odd==INT_MAX){
            return true;
        }
        for(int i=0;i<nums.size();i++){
             if(nums[i]%2==0 && nums[i]-odd<1){
                return false;
            }
        }
         return true;
    }
};