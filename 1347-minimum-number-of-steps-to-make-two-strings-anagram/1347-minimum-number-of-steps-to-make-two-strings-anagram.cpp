class Solution {
public:
    int minSteps(string s, string t) {
        int sum=0;
        if(s.size()!=t.size()){
            return sum;
        }
        int n=s.size();
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        for(char ch:t){
            freq[ch-'a']--;
        }
       
        for(int i=0;i<26;i++){
            if(freq[i]>0){
              sum=sum+freq[i];
            }
        }
        return sum;
        
    }
};