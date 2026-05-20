class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    result=result^nums[i];

                }
            }
        }
        return result;
        
        
    }
};