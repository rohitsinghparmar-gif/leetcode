class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>nums;
        for(int i=0;i<prices.size();i++){
            bool x=true;
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>prices[j]||prices[i]==prices[j]){
                    nums.push_back(prices[i]-prices[j]);
                    x=false;
                    break;
                }
               
            }
             if(x==true){
                    nums.push_back(prices[i]);
                }
        }
        return nums;
        
    }
};