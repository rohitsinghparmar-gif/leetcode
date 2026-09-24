class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>nums(26);
        for(char ch:s){
            nums[ch-'a']++;
        }
        int x;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            x=nums[i];
            break;
        }
     }
      for(int i=0;i<nums.size();i++){
        if(nums[i]!=x && nums[i]!=0){
            return false;
            
        }
      }
      return true;
        
    }
};