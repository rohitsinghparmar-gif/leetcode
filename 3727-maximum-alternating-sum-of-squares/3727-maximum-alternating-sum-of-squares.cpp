class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                 nums[i]=-nums[i];

            }
           
        }
        sort(nums.begin(),nums.end());
        long long pos=0;
        long long neg=0;
        for(int i=0;i<nums.size()/2;i++){
            neg=neg+nums[i]*nums[i];

        }
        for(int i=nums.size()/2;i<nums.size();i++){
            pos=pos+nums[i]*nums[i];
        }
        return pos-neg;
    }
};