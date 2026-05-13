class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int x=nums[0];
        int y=nums[n-1];
        int z=nums[n-2];
        int sum=y+z-x;
        return sum;
        
    }
};