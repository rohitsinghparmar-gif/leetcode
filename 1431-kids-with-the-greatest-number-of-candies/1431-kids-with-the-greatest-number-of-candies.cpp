class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extra) {
        vector<bool>ans;
        int n=nums.size();
        int max=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int maximum=max;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+extra>=maximum){
                ans.push_back(true);
               
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};