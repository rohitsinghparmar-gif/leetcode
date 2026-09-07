class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int count=0;
        int sum=0;
        for(char ch:s){
            if(ch=='a'){
                 count++;

            }
            else{
                sum++;
            }
           

        }
        return abs(sum-count);
      
    }
};