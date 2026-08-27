class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int n=nums.size();
        int x=nums[n-1];
        nums[n-1]=-1;
      
        int maxi=x;
        for(int i=nums.size()-2;i>=0;i--){
                int current=nums[i];
                nums[i]=maxi;
                maxi=max(maxi,current);
                 
            

        }
        
        return nums;
        
    }
};