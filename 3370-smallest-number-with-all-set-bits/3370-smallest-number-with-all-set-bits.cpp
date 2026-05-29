class Solution {
public:
    int smallestNumber(int n) {
        int prod=1;
        if(n==1){
            return n;
        }
      for(int i=1;i<n;i++){
          prod=prod*2;  
        if(prod>n){
            break;
        }
      
        

      }     
      return prod-1;   
    }
};