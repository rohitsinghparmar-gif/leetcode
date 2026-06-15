class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>arr;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
             arr.push_back(it.second);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                return false;
                break;
            }
        }
        return true;
      
        
    }
};