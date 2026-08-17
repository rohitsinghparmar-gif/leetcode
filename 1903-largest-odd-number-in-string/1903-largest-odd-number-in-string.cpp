class Solution {
public:
    string largestOddNumber(string num) {
        int count=0;
        int n=num.size();
       for(int i=num.size()-1;i>=0;i--){
         int x=num[i]-'0';
        if(x%2==0){
            count++;
        }
        else{
            break;
        }

       }
       return num.substr(0,n-count);
    }
};