class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int num:nums){
        //     mp[num]++;
        // }
        // for(auto it:mp){
        //     if(it.second==1){
        //         return it.first;
        //     }
        // }
        // return -1;
        int result=0;
        for(int i=0;i<nums.size();i++){
            result=result^nums[i];

        }
        return result;
    }
};