class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
       
        int n=s.size();
         if(n==1){
            return 1;
        }
        for(char ch:s){
            mp[ch]++;
        }
        int sum=0;
        bool odd=false;
        for(auto it:mp){
            if((it.second)%2==0){
                sum=sum+it.second;
            }
            else{
                sum += it.second - 1;
                odd=true;
            }
        }
        if(odd){
            sum++;
        }
        return sum; 
    }
};