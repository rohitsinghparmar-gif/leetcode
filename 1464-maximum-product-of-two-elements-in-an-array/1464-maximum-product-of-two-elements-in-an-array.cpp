class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int firstmax=0;
        int secondmax=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=firstmax){
                secondmax=firstmax;
                firstmax=nums[i];
                
            }
            else if(nums[i]>secondmax){
                 secondmax=nums[i];
            }
        }
        
        return (firstmax-1)*(secondmax-1);
        
    }
};