class Solution {
public:
    int minMoves(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int min=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        for(int num:nums){
            ans=ans+abs(min-num);
        }
        return ans;
        
    }
};