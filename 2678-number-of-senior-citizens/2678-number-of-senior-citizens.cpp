class Solution {
public:
bool issenior(int n){
    if(n>60){
        return true;
    }
    return false;
}
    int countSeniors(vector<string>& details) {
        int count=0;
        for(string s:details){
            // int x=s.substr(10,2)-'0';
            int age = stoi(s.substr(11, 2));
            if(issenior(age)){
                count++;
            }

            
        }
        return count;
    }
};