class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        long  long multi=1; int x=1;
        stack<long long>stake;
        vector<int>arr;
        while(n>0){
            int digit=n%10;
            if(digit!=0){
                stake.push(digit*multi);
            }
            multi=multi*10;
            n=n/10;
        }
        while(!stake.empty()){
            arr.push_back(stake.top());
            stake.pop();
        }
        return arr;
    }
};