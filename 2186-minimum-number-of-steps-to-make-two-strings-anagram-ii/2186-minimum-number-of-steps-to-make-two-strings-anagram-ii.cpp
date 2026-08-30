class Solution {
public:
    int minSteps(string s, string t) {
       vector<int>s1(26,0);
       vector<int>t1(26,0);
       for(char ch:s){
        s1[ch-'a']++;
       }
        for(char ch:t){
        t1[ch-'a']++;
       }
       for(char ch:s){
        t1[ch-'a']--;
       }
       for(char ch:t){
        s1[ch-'a']--;
       }
       int ans=0;
       for(int i=0;i<s1.size();i++){
         if(s1[i]>0){
            ans=ans+s1[i];
         }
       }
       for(int i=0;i<t1.size();i++){
         if(t1[i]>0){
            ans=ans+t1[i];
         }
       }
       return ans;

        
    }
};