class Solution {
public:
int sum(int n){
    int ans=0;
    while(n>0){
        ans=ans+n%10;
        n=n/10;


    }
    return ans;
}
    int getLucky(string s, int k) {
        string ans="";
        for(int i=0;i<s.size();i++){
            int x=s[i]-'a'+1;
            ans=ans+to_string(x);
        }
        int  n=0;
      for(int i=0;i<ans.size();i++){
        n=n+ans[i]-'0';
      }

    while(k>1){
        n=sum(n);
        k--;
    }
      return n;
        
    }
};