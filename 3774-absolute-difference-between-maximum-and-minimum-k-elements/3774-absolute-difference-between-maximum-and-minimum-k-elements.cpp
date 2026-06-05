class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0,count=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
            count=count+nums[n-1-i];
        }
        return abs(count-sum);
        
        
    
        
    }
};