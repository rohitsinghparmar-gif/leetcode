class Solution {
public:
    vector<int> evenOddBit(int n) {
        int x=0;
        int even=0;
        int odd=0;
        while(n>0){
            int digit=n%2;
            if(x%2==0){
                if(digit==1){
                    even++;
                }
            }
            else{
                if(digit==1){
                    odd++;
                }
            }
            n=n/2;
            x++;
        }
        return {even,odd};
    }
};