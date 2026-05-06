class Solution {
public:
    string defangIPaddr(string nums) {
        string str="";
        for(int i=0;i<nums.size();i++){
            if(nums[i]=='.'){
                str+="[.]";
            }
            else{
                str+=nums[i];
            }
        }
        return str;
    }
};