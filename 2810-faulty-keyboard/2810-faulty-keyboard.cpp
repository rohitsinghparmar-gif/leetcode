class Solution {
public:
string reverse(string str){
    int low=0,high=str.size()-1;
    while(low<high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
    return str;
}
    string finalString(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i') ans=reverse(ans);
            else ans=ans+s[i];
        }
        return ans;
    }
};