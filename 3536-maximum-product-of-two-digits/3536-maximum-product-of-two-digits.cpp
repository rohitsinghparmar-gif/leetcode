class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n>0){
            int digit=n%10;
            arr.push_back(digit);
            n=n/10;
        }
        int n1=arr.size();
       sort(arr.begin(),arr.end());
       int product=arr[n1-1]*arr[n1-2];
       return product;
    }
};