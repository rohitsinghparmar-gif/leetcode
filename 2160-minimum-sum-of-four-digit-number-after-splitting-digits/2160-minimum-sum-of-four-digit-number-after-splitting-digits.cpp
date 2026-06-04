class Solution {
public:
    int minimumSum(int num) {
        vector<int>arr;
        int x=num;
        while(x>0){
            int digit=x%10;
            arr.push_back(digit);
            x=x/10;
        }
        sort(arr.begin(),arr.end());
        int sum=arr[0]*10+arr[2]+arr[1]*10+arr[3];
        return sum;
        
      
        
        
    }
};