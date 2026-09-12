class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans="";
        string str="";
        for(char ch:s){
            if(ch != '#'){
                ans.push_back(ch);
            }
            else if(!ans.empty()){
                ans.pop_back();
            }
        }
        for(char ch:t){
            if(ch!='#'){
                str.push_back(ch);
            }
            else if(!str.empty()){
                str.pop_back();
            }
        }
       
        return ans==str;
    }
};