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
    string reverseOnlyLetters(string s) {
        string str="";
        for(char ch:s){
            if(isalpha(ch)){
                str=str+ch;
            }
        }
        string ans="";
        str=reverse(str);
        int left=0;
        for(char ch:s){
            if(isalpha(ch)){
               ans+=str[left++];
            }
            else{
                ans=ans+ch;
            }
        }
        return ans;
    }
};