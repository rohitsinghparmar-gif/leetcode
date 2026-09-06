class Solution {
public:
    string restoreString(string s, vector<int>& nums) {
        string str=s;
        for(int i=0;i<nums.size();i++){
                str[nums[i]]=s[i];
        }
        return str;
        
    }
};