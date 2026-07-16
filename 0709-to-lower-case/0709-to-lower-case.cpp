class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(char ch:s){
            if(islower(ch)){
                ans=ans+ch;
            }
            else{
                ch=tolower(ch);
                ans=ans+ch;

            }
        }
        return ans;
        
    }
};