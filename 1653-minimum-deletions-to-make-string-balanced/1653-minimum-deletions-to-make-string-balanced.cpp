class Solution {
public:
    int minimumDeletions(string s) {
        string ans="";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(ans.empty()){
                ans.push_back(s[i]);
            }
            else{
                if(!ans.empty()){
                    if(ans.back()-'a'>s[i]-'a'){
                        ans.pop_back();
                        count++;
                    }
                    else{
                        ans.push_back(s[i]);
                    }
                }
               
            }


        }
        return count;
    }
};