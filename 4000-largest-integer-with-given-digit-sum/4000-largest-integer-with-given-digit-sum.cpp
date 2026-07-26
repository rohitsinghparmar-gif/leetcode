class Solution {
public:
    int largestInteger(int n, int s) {
        if(n*9<s)return -1;
        int ans=0;
        int size=0;
        while(size!=n){
            if(s==0){
            ans*=10;
            size++;
            continue;
            }
            if(s>9){
                ans=ans*10+9;
                s-=9;
                size++;
            }
            else{
                ans =ans*10+s;
                s=0;
                size++;
            }
        }
        return ans;

        
    }
};