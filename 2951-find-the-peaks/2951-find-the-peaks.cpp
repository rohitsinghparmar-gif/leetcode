class Solution {
public:
    vector<int> findPeaks(vector<int>& nums) {
        vector<int>s;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                s.push_back(i);
            }
        }
        return s;
        
    }
};