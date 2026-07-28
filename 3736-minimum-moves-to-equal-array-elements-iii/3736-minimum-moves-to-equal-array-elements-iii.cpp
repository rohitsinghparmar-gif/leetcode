class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=nums[0];
        int  ans=0;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }

        }
        for(int num:nums){
            ans=ans+abs(max-num);
        }
     return ans;
       
        
    }
};