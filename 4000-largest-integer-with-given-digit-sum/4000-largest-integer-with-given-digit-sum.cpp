class Solution {
public:
int digitsum( int n){
    int sum=0;
while(n>0){
    sum=sum+n%10;
    n/=10;
}
return sum;
}
    int largestInteger(int n, int s) {
        int end=1;
        int k=n;
        while(k>0){
            end=end*10;
            k--;
        }
        int start=end/10;
        int ans=-1;
        for(int i=end-1;i>=start;i--){
              if(digitsum(i)==s){
             return i;
              }
        }
        if(s==0){
            return 0;
        }
    return -1;
        
    }
};