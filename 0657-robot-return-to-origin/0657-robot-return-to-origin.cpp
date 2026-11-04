class Solution {
public:
    bool judgeCircle(string s) {
        int x=0;
        int y=0;
        for(char ch:s){
            if(ch=='L'){
                x--;
            }
            else if(ch=='R'){
                x++;
            }
            else if(ch=='U'){
                y++;
             }
             else{
                y--;
             }
        }
        if(x==0 && y==0){
            return true;
        }
        return false;
    }
};