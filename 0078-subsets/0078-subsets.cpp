class Solution {
public:
void subset(vector<int>& nums,vector<vector<int>>&ans,vector<int>&combi,int i)
{
    
    if(i==nums.size()){
        ans.push_back(combi);
        return;
    }
    
    combi.push_back(nums[i]);
    subset(nums,ans,combi,i+1);
    combi.pop_back();
    subset(nums,ans,combi,i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>combi;


        subset(nums,ans,combi,0);
        return ans;
    }
};