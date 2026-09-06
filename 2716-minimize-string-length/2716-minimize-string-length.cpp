class Solution {
public:
    int minimizedStringLength(string s) {
        sort(s.begin(),s.end());
        int count=0;
        for(int i=1;i<=s.size();i++){
            if(s[i]==s[i-1]){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
        
    }
};