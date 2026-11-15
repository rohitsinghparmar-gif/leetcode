class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        int x=k-1;
        int sum=x*(x+1)/2;
        return maxi*k+sum;
        
    }
};