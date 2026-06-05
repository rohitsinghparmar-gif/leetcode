class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int currmax=INT_MIN;
        int maxdiff=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            currmax=max(currmax,abs(nums[i]-nums[i+1]));

        }
        return max(currmax,abs(nums[0]-nums[n]));
        
    }
};