class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>nums;
        vector<int>ans;
        for(int num:bulbs){
            nums[num]++;

        }
        for(auto it:nums){
            if(it.second%2==1){
                ans.push_back(it.first);

            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};