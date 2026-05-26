class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multi) {
        int j=0;
        int i;
        while(j<k){
            int min=0;
            for( i=0;i<nums.size();i++){
                if(nums[i]<nums[min]){
                    min=i;
                }
            }
            nums[min]=nums[min]*multi;
            j++;
        }
        return nums;
    }
};