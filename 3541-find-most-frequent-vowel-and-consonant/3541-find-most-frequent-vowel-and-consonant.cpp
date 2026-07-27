class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;

        }
        int vowelmax=0;
        int consomax=0;
        for(auto it:mp){
           if(it.first=='a'||it.first=='e'||it.first=='o'||it.first=='i'||it.first=='u'){
             if(it.second>vowelmax){
                vowelmax=it.second;
            }

           }
           
            else{
                if(it.second>consomax){
                    consomax=it.second;
                }

            }

        }
        return consomax+vowelmax;
    }
};