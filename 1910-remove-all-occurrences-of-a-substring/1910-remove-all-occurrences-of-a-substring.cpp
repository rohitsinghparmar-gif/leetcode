class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans="";
        int n=part.size();
        for(char ch:s){
            ans.push_back(ch);
            if(ans.size()>=n){
                if(ans.substr(ans.size()-n)==part){
                    for(int i=0;i<n;i++){
                        ans.pop_back();
                    }
                }
            }
        }
        return ans;
    }
};