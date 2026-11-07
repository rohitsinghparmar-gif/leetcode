class Solution {
public:
    int hammingWeight(int n) {
        long long count=0;
        while(n>0){
            int bit=n%2;
            if(bit%2==1){
                count++;
            }
            n=n/2;

        }
        return count;
        
    }
};