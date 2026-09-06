class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>nums(26,0);
        for(char ch:s){
            nums[ch-'a']++;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                count++;
            }
        } 
        if(count==26){
            return true;
        }   
        return false;   
    }
};