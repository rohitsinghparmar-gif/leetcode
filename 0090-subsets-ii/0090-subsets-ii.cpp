class Solution {
public:
set<vector<int>>s;
void subset(vector<int>& nums,vector<vector<int>>&ans,vector<int>&combin,int i){

    // if(i==nums.size()){
        // if(s.find(combin)==s.end()){
            // s.insert(combin);
            ans.push_back(combin);
        // }
        // return;

    // }
for(int j = i; j < nums.size(); j++) {

            // Skip duplicate choices at the same level
            if(j > i && nums[j] == nums[j - 1])
                continue;

            combin.push_back(nums[j]);

            subset(nums, ans, combin, j + 1);

            combin.pop_back();
        }

}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>combin;
        sort(nums.begin(),nums.end());
        subset(nums,ans,combin,0);
        return ans;
        
    }
};