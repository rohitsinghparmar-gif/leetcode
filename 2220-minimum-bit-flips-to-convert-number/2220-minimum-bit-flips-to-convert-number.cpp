class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        int sum=start^goal;
        while(sum>0){
            int digit=sum%2;
            if(digit==1){
                count++;
            }

          sum=sum/2;
        }
        
    return count;
    }
};