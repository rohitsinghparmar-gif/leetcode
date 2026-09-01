class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
             if(s[i]!=' '){
                count++;
            }
            else if( count>0){
                if(!ans.empty()){
                    ans=ans+' ';

                }
                ans=ans+s.substr(i+1,count);
                count=0;
                
                    
            }
        }
    
    if (count > 0) {
            if (!ans.empty()) {
                ans += ' ';
            }

            ans += s.substr(0, count);
        }
        return ans;
        
    }
};