class Solution {
public:
    int maximum69Number (int num) {
        int rev=0;
        if(num==9999){
            return num;
        }
        while(num>0){
            int digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        vector<int>arr;
          while(rev>0){
            int digit=rev%10;
            arr.push_back(digit);
            rev=rev/10;
        }

        for(int i=0;i<arr.size();i++){
            if(arr[i]==6){
                arr[i]=9;
                break;
                
            }

            

        }
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum*10+arr[i];


        }
        return sum;
    }
};