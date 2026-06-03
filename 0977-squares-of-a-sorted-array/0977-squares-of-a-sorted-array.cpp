class Solution {
public:
int square(int n){
    
    return n*n ;
}
    vector<int> sortedSquares(vector<int>& nums) {
     for(int i=0;i<nums.size();i++){
        nums[i]=square(nums[i]);
     }
     sort(nums.begin(),nums.end());
     return nums;

    }
};