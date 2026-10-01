class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans= x^y ;
        int count=0;
        while(ans>0){
            int bit=ans%10;
            if(bit%2==1){
                count++;
            }
        ans=ans/2;
        }
        return count;
    }
};