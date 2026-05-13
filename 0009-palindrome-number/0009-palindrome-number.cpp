class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        int n=x;
        while(n>0){
            int digit=n%10;
            reverse=reverse*10+digit;
            n/=10;

        }
        if(reverse==x){
            return true;
        }
        return false;
    }
};