class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        int maxi=-1;
        for(int num:arr){
            mp[num]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.first==it.second){
                maxi=max(maxi,it.first);
            }
        }
        return maxi;
        
    }
};