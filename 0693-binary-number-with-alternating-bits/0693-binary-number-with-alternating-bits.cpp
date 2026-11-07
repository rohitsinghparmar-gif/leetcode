class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=-1;
        while(n>0){
            int digit=n%2;
            if(digit==prev){
                return false;
            }
            prev=digit;
            n=n/2;
        }
        return true;
    }
};