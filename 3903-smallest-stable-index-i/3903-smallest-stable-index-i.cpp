class Solution {
public:
int minimum(vector<int>&nums,int i){
    int mini=nums[i];
    for(int j=i;j<nums.size();j++){
        if(nums[j]<mini){
            mini=nums[j];
        }
    }
    return mini;
}
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=0;
        int mini=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=minimum(nums,i);
            if(maxi - mini <= k){
                return i;
            }
        }
        return -1;
        
    }
};