class Solution {
public:
    int scoreOfString(string s) {
        int x;
        int n=s.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
           x=s[i]-96;
           int y=s[i+1]-96;
           sum=sum+abs(x-y);


        }
        return sum;
        
    }
};