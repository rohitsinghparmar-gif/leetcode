class Solution {
public:
    int mostWordsFound(vector<string>& nums) {
        int maximum=0;
        for(string s:nums){
            int count=1;
            for(char ch:s){
                if(ch==' '){
                    count++;
                }

            }
            maximum=max(maximum,count);
        }
        return maximum;
    }
};