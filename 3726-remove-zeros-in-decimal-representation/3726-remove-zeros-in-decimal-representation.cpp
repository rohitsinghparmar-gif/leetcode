class Solution {
public:
    long long removeZeros(long long n) {
    long long sum=0;
    while(n>0){
        int digit=n%10;
        if(digit>0){
            sum=sum*10+digit;
        }
        n=n/10;
    }
    long long rev=0;
    while(sum>0){
        int digit=sum%10;
        rev=rev*10+digit;
        sum=sum/10;

    }
    return rev;
    }
};