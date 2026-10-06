class Solution {
public:
    int minAddToMakeValid(string s) {
        int sum=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
               count++;
            }
             if(s[i]==')'){
               count--;
            }
             if(count<0){
                sum++;
                count=0;
            } 
        }
       
         int c=0;
        for(int i=s.size()-1;i>=0;i--){
          
            if(s[i]==')'){
                c++;
            }
             if(s[i]=='('){
               c--;
            }
              if(c<0){
                sum++;
                c=0;
            }
        }
return sum;
        
    }
};