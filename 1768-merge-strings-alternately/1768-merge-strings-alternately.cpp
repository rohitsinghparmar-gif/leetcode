class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n=word1.size();
        int n2=word2.size();
        int left=0;
        int right=0;
      while(left<n||right<n2){
           if(left<word1.size()){
              ans=ans+word1[left];
              left++;
            }
            if(right<word2.size()){
              ans=ans+word2[right];
              right++;
            }
             
     }
    
    return ans;
}};