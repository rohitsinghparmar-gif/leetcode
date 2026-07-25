class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while(n>0){
            int digit=n%10;
            nums.push_back(digit);
            n=n/10;
        }
        int n1=nums.size();
           sort(nums.begin(),nums.end());
    int product=nums[n1-1]*nums[n1-2];
   
 
       return product;
    }
};
   