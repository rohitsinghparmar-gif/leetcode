class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int left=0;
        int right=0;
        int count=0;
        for(char ch:s){
            if(ch=='L'){
                left++;
            }
            else if(ch=='R'){
                right++;

            }
            else{
                count++;
            }
        }
        int mini=min(left,right);
        int maxi=max(left,right);
        return abs(count+maxi-mini);
        
    }
};