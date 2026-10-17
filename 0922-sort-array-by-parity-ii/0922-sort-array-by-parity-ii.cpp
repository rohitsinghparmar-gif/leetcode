class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>div;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                div.push_back(nums[i]);
            }
        }
          for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                div.push_back(nums[i]);
            }
        }
        int n=nums.size()/2;
        int x=nums.size();
       int low=0;int high=n;
       int i=0;
        while(i<x){
            if(i%2==0){
                nums[i]=div[low];
                low++;
            }
            else{
                nums[i]=div[high];
                high++;
            }
    
    i++;
        }
        return nums;
        
    }
};