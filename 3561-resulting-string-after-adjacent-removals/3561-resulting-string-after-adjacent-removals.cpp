// class Solution {
// public:
//     string resultingString(string s) {
//         string ans;
//         for(char ch:s){
//             if(!ans.empty() && abs(ans.back()-ch)==1){
//                 ans.pop_back();
//             }
//             else{
//                 ans.push_back(ch);
//             }
//         }

//         return ans;
        
//     }
// };
class Solution {
public:
    string resultingString(string s) {
        string ans;

        for(char ch : s) {
            if(!ans.empty() && abs(ans.back() - ch) == 1) {
                
                ans.pop_back();
            }
            else if(!ans.empty() && ans.back()=='z' &&  ch=='a' || !ans.empty() && ans.back()=='a' &&  ch=='z'){
                ans.pop_back();
            }
            else {
                ans.push_back(ch);
            }
        }

        return ans;
    }
};
  