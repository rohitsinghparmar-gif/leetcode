class Solution {
public:
    string mirror(string str){
        int a=0,b=str.size()-1;
        while(a<b){
            swap(str[a],str[b]);
            a++,b--;
        }
        return str;
    }
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n%2==0){
                s=s.substr(0,n/2);
                 sort(s.begin(),s.end());
            s=s+mirror(s);


        }
        else{
            char z=s[n/2];
            s=s.substr(0,n/2);
            sort(s.begin(),s.end());
            s=s+z;
            s=s+mirror(s.substr(0,s.size()-1));
        }
        return s;
       


      
    }
};