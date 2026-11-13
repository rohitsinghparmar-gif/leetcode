class Solution {
public:
string reverse(string s){
    int low=0,high=s.size()-1;
    if(low<=high){
        swap(s[low++],s[high--]);
    }
    return s;
}
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i]==reverse(words[j])){
                    count++;
                }

            }

        }
        return count;
        
    }
};