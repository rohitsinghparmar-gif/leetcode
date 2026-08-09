class Solution {
public:
string rev(string s){
    int low=0;
    int high=s.size()-1;
    while(low < high){
        swap(s[low],s[high]);
        low++;
        high--;

    }
    return s;
}
    string reversePrefix(string s, int k) {
        int n=s.size();
        string remain=s.substr(k,n);
        string ans=s.substr(0,k);
       string first= rev(ans);
        return first+remain;
        
    }
};