class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>arr;
        int n=nums.size();
        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            arr.push_back(nums[i]);
        }
        return arr;
        
    }
};