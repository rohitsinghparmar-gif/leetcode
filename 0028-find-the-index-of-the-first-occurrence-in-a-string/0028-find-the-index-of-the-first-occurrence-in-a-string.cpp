class Solution {
public:
    int strStr(string haystack, string needle) {
        string temp = "";

        for(int i = 0; i < haystack.size(); i++) {
            temp = "";

            for(int j = i; j < haystack.size() && temp.size() < needle.size(); j++) {
                temp += haystack[j];
            }

            if(temp == needle) {
                return i;
            }
        }

        return -1;
        
    }
};