class Solution {
public:
    int reverse(int x) {
        int n=x;
        int lastdigit;
        int reverse=0;
      
        while(n!=0){
            lastdigit=n%10;
             n=n/10;
            if(reverse > INT_MAX/10||reverse < INT_MIN/10){
                return 0;
            }
            reverse=reverse*10+lastdigit;
           


        }
        return reverse;
        
    }
};