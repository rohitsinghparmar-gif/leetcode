class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        vector<int>ans;
        vector<int>pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int n=nums.size();
        for(int i=0;i<nums.size()/2;i++){
          ans.push_back(pos[i]);
          ans.push_back(neg[i]);
           

        }
            return ans;
            
                
           
        
     
        
    }
};