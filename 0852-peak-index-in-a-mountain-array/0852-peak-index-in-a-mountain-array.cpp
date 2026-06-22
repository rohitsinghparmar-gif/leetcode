class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int maxi=nums[0];
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];

            }
        }
        for(int i=0;i<nums.size();i++){
            if(maxi==nums[i]){
                return i;

            }
        }
        return -1;
        
    }
};