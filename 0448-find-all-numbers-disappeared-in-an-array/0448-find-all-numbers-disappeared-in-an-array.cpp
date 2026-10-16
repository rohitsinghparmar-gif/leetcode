class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
  sort(nums.begin(),nums.end());
  for (int i = 1; i < nums[0]; i++) {
     ans.push_back(i); 
     }
   for(int i=0;i<nums.size()-1;i++){
    if(nums[i+1]-nums[i]>1){
        for(int j=nums[i]+1;j<nums[i+1];j++){
            ans.push_back(j);
        }
    }

   }
   int n=nums.size();

for (int i = nums[n - 1] + 1; i <= n; i++) { 
    ans.push_back(i);
 }
   return ans;

    }
};