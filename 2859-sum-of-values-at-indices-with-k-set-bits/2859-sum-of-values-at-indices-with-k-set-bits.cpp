class Solution {
public:
int  set(int n){
    int count=0;
    while(n>0){
        int digit=n%2;
        if(digit==1){
            count++;
        }
        n=n/2;
    }
   return count;
}
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
          int x=set(i);
          if(x==k){
            sum=sum+nums[i];

          }
        }
        return sum;
        
    }
};