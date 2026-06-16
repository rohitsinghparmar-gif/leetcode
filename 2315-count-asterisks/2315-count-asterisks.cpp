class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        int sum=0;
        for(char c:s){
         if(c=='|'){
            count++;
         }
         if(c=='*'){
             if(count%2==0){
            sum++;
         }

         }
        
            
        }
        return sum;
        
    }
};