class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        for(int x:nums)ans^=x;
        if(ans>0)return nums.size();
        for(int x:nums) if(x>0)return nums.size()-1;
        return 0;
    }
};