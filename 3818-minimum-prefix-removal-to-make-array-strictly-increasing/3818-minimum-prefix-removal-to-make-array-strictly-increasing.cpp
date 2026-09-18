class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int count=1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                count++;
            }
            else{
                break;
            }
        }
        return nums.size()-count;

        
    }
};