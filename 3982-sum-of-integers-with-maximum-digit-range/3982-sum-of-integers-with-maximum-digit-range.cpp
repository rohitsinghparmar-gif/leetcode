class Solution {
public:
int digit(int n){
    int mini=INT_MAX;
    int maxi=INT_MIN;
    while(n>0){
        int digit=n%10;
        maxi=max(maxi,digit);
        mini=min(mini,digit);
        n=n/10;
    }
    return maxi-mini;

}
    int maxDigitRange(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(digit(nums[i])>maxi){
                maxi=digit(nums[i]);
            }

        }
        int sum=0;
       for(int i=0;i<nums.size();i++){
        if(digit(nums[i])==maxi){
            sum=sum+nums[i];
        }

       }
       return sum;
        
    }
};