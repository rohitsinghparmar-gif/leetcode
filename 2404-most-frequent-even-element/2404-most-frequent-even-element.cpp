class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int max=0;
        int ans=-1;
        for(auto it:mp){
           int num=it.first;
           int freq=it.second;
           if(num%2==0){
            if(freq>max){
                max=freq;
                ans=num;
            }
           
           else if(freq==max){
            ans=min(ans,num);
           }
        }}
        return ans;
    }
};