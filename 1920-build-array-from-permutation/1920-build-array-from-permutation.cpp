class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            arr.push_back(nums[x]);
        }
        return arr;
    }
};