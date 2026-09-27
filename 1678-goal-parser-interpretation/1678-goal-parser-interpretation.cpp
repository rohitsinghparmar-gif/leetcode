class Solution {
public:
    string interpret(string s) {
        int n=s.size();
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='('&&s[i+1]==')'){
                s.replace(i,2,"o");
            }
            else if(s[i]=='('&& s[i+1]=='a'){
                s.replace(i,4,"al");
            }
        }
       
        return s;
        
    }
};