class Solution {
public:
    int bulbSwitch(int n) {
        if(n==0){
            return 0;
        }
        int count=0;
        int sum=3;
        while(n>0){
            n=n-sum;
            count++;
            sum=sum+2;
        }
return count;
    }
};