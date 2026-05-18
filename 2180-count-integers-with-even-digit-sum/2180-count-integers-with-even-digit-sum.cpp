class Solution {
public:
int digitsum(int n){
    int sum=0;
    while(n>0){
            int digit=n%10;
            sum=sum+digit;
            n/=10;
        }
        return sum;

}
    int countEven(int num) {
       long long sum=0,count=0;
       for(int i=1;i<=num;i++){
        int sum=digitsum(i);
        if(sum%2==0){
            count++;
        }
       }
       return count;
    }
};