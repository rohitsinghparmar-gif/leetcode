class Solution {
public:
    int arrangeCoins(int n) {
        int count=1;
        int ans=1;
        while(n>=count){
            n=n-count;
            count++;
            
            ans++;
            
            
        }
        return ans-1;
        
    }
};