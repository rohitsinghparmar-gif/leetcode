class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans;
        for(string str:words){
            ans=ans+str[0];
        }
        if(ans==s){
            return true;
        }
        return false;
    }
};