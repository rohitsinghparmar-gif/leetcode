class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(string str:patterns){
            string ans=str;
            if(word.contains(ans)){
                count++;
            }
        }
        return count;
    }
};