class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>ans;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second>n/2){
                return it.first;
            }

        }
        return -1;
        
    }
};