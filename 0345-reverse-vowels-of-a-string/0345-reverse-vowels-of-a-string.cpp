class Solution {
public:
    string reverseVowels(string s) {
        string vowel="";
        for(char ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                vowel=vowel+ch;

            }
        }
    int low=0,high=vowel.size()-1;
    while(low<high){
        swap(vowel[low],vowel[high]);
        low++;
        high--;
    }
        string ans="";
        int start=0;
       for(char &ch:s){
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||             ch=='A'||    ch=='E'||ch=='I'||    ch=='O'||ch=='U')
      {
               ch= vowel[start++];

            }
           
       }
       return s;
    }
};