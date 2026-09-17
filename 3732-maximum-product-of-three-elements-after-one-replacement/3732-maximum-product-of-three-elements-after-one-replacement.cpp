class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long first=INT_MIN;
        long long second=INT_MIN;
     for(int i=0;i<nums.size();i++){
        if(abs(nums[i])>first){
            second=first;
            first=abs(nums[i]);
         
        }
        else if(abs(nums[i])>second){
             second=abs(nums[i]);
        }
     }
        return first*second*100000;
    }
};