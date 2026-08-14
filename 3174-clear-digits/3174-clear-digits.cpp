class Solution {
public:
    string clearDigits(string s) {
        // for(int i=0;i<s.size();i++){
        //     if(isdigit(s[i])){
        //         s.erase(s.begin()+i);
        //         i--;
        //         s.erase(s.begin()+i);
        //         i--;
        //     }
        // }
        // return s;
        string ans="";
        for(char ch:s){
            if(isdigit(ch)){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};