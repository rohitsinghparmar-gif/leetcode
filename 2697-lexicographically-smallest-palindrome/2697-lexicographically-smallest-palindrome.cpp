class Solution {
public:
    string makeSmallestPalindrome(string s) {

        int low=0,high=s.size()-1;
        while(low<=high){
            int x=s[low]-'a';
            int y=s[high]-'a';
            if(x<y){
                s[high]=s[low];
                
            }
            else{
                s[low]=s[high];

            }
            low++;
            high--;
        }
        return s;
        
    }
};