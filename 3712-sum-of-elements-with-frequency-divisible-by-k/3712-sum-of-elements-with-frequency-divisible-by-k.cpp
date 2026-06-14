class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int sum=0;
        for(auto it:mp){
            if(it.second%k==0){
                sum=sum+it.second*it.first;

            }
        }
     return sum;
        
    }
};