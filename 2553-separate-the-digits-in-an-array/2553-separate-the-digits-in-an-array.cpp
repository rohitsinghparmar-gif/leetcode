class Solution {
public:
   int reverse(int n){
    int rev=0;
    while(n>0){
    int digit=n%10;
    rev=rev*10+digit;
    n/=10;
   }
   return rev;
   }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;
        int digit;
        for(int i=0;i<nums.size();i++){
            int a=reverse(nums[i]);
            int b=nums[i];
            while(a>0){
                digit=a%10;
                arr.push_back(digit);
               a/=10;    
            }
      while(b%10==0){
        arr.push_back(0);
        b/=10;
      }
          
        }
        return arr;
    }
};
 