class Solution {
public:
    int countMatches(vector<vector<string>>& s, string key, string rule) {
        int count=0;
        int x;
        if(key=="type"){
            x=0;
        }
        if(key=="color"){
            x=1;
        }
        if(key=="name"){
            x=2;
        }
        for(int i=0;i<s.size();i++){
            if(s[i][x]==rule){
                count++;
            }
        }
        return count;
    }
};