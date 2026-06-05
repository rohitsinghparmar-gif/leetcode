class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int count=0;
        int i=0;
    for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=coins){
            count++;
            sum=sum+nums[i];
        }
        else{
            break;
        }
    }
    return count;
    }
};