class Solution {
public:
    bool isBalanced(string num) {
        int sum=0;
        int count=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                sum=sum+num[i]-'0';
            }
            else{
                count=count+num[i]-'0';

            }
        }
        if(sum==count){
            return true;
        }
        return false;
        
    }
};