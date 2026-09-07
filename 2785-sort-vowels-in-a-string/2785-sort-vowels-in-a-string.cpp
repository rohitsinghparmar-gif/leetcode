class Solution {
public:
    string sortVowels(string s) {
        vector<char>nums;
        for(char ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                nums.push_back(ch);

            }
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=nums[ans++];
            }
        }
        return s;
        
    }
};