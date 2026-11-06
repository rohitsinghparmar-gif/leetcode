class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        vector<int>arr;
        for(int i=mini;i<=maxi;i++){
            bool x=true;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    x=false;
                    break;
                   
                }
            }
            if(x!=false){
                arr.push_back(i);
            }
        }

    return arr; 
              
    }
};