class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=="DOWN"){
                sum=sum+n;
            }
            else if(s[i]=="UP"){
                sum=sum-n;
            }
            else if(s[i]=="RIGHT"){
                sum++;
            }
            else{
                sum--;
            }
        }
        return sum;
        
    }
};