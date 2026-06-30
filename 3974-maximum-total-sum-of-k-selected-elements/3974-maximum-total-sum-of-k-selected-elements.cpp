class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
         sort(nums.begin(), nums.end());

        long long sum = 0;
        int n = nums.size();

        for (int i = n - 1; i >= n - k; i--) {
           
            if(mul>0){
                sum =sum+ 1LL * nums[i] * mul;
            }
            else{
                sum=sum+nums[i];
            }
            mul--;
        }

        return sum;
        
    }
};