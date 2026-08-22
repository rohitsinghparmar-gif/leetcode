class Solution {
 public:
   bool checkDivisibility(int n) {
    int x=n;
        int sum=0,product=1;
        
        while(n>0){
           int lastdigit=n%10;
            sum=sum+lastdigit;
            product=product*lastdigit;
            n/=10;       
            }
        return x % (sum+product) == 0;


  }
};