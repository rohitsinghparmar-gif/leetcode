class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     vector<int>arr;
     sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            arr.push_back(nums[i]);
        }
     }
     nums=arr;
       return arr.size();
    }
};