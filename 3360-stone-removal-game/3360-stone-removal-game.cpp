class Solution {
public:
    bool canAliceWin(int n) {
        int alice=0;
        int bob=0;
        if(n<10){
            return false;
        }
        int  i=0;
        int x=10;
        
        while(n>0){
            if(n<x){
                break;
            }
            else if(i%2==0){
                if(n>=x){
                 alice++;
                n=n-x;
                x--;
                }
               
            }
            else{
                if(n>=x){
                    bob++;
                    n=n-x;
                    x--;
                }

            }
            i++;

        }
        if(alice>bob){
            return true;
        }
        return false;
        
    }
};