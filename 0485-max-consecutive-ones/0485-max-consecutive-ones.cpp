class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       
        int count=0;
        int maxlength=0;
        maxlength=max(count,maxlength);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            maxlength=max(maxlength,count);
        }
        return maxlength;

        
    }
};