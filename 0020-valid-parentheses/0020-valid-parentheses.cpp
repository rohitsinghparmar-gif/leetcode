class Solution {
public:
    bool isValid(string s) {
        stack<char>stake;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                stake.push(ch);
            }
            
            else{
                if(stake.empty())return false;
            
                if(ch==']'&&stake.top()!='[')return false;
                if(ch=='}'&&stake.top()!='{')return false;
                if(ch==')'&&stake.top()!='(' )return false;
                stake.pop();
             
            }  
        }
        return stake.empty();
        
    }
};