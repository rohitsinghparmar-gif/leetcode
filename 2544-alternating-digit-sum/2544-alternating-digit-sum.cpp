class Solution {
public:
    int alternateDigitSum(int n) {
        int rev=0;
         vector<int>arr;
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
           
            n=n/10;
        }
       
        while(rev>0){
            int digit=rev%10;
            arr.push_back(digit);
            rev=rev/10;
        }
        int count=0,sum=0;
        for(int i=0;i<arr.size();i++) {
            if(i%2==0){
                sum=sum+arr[i];
            }
            if(i%2!=0){
                count=count+arr[i];
            }

        }
        return (sum-count);
       

       
    }
};