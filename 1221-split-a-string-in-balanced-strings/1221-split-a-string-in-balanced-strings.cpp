class Solution {
public:
    int balancedStringSplit(string s) {
        int sum=0;
        int r=0,l=0;
        for(char ch:s){
            
            if(r==l){
                r=0;
                l=0;
                sum++;
            }
            if(ch=='R'){
                r++;
            }
            if(ch=='L'){
                l++;
            }

        }
        return sum;
    }
};