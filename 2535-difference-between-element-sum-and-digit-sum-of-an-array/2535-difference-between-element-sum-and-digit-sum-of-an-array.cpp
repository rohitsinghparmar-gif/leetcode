class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0,sum2=0;
        int x;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];

        }
        for(int i=0;i<n;i++){
            int count=0;
            while(nums[i]>0){
                int digit=nums[i]%10;
                count=count+digit;
                nums[i]=nums[i]/10;
            }
            sum2=sum2+count;
        }
         
        return sum-sum2;
        
    }
};