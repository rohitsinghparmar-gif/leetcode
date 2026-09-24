class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
             int sum=0;
            while(nums[i]>0){
                int digit=nums[i]%10;
                sum=sum+digit;
                nums[i]/=10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
     
        
    }
};