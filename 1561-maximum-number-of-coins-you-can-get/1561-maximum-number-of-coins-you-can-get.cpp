class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        int n=nums.size()/3;
        int j=nums.size()-2;
        while(n>0){
            sum=sum+nums[j];
            j=j-2;
            n--;
        }
        return sum;
        
    }
};