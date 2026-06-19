class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
      for(auto it:mp){
        if(it.second==1){
            arr.push_back(it.first);
        }
      }

        
        return arr;
        
    }
};