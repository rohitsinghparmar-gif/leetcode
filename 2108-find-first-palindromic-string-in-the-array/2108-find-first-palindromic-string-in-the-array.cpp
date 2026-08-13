class Solution {
public:
string rev(string s){
    int low=0;
    int high=s.size()-1;
    while(low<high){
        swap(s[low],s[high]);
        low++;
        high--;

    }
    return s;
}

    string firstPalindrome(vector<string>& words) {
        for(string str:words){
            string ans=str;
            if(str==rev(ans)){
                return str;
                break;

            }
        }
        return {};
    }
};