class Solution {
public:
int digitprod(int num){
    int prod=1;
    while(num>0){
        int digit=num%10;
        prod=prod*digit;
        num=num/10;
    }
    return prod;
}
    int smallestNumber(int n, int t) {
      int ans=n;
      int x;
      while(ans<=100){
        x=digitprod(ans);
        if(x%t==0){
            break;
        }
        else{
            ans++;
        }
        
      }
      return ans;

      

    }
};