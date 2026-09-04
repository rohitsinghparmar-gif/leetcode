class Solution {
public:
    string reverseByType(string s) {
        string str="";
        string special="";
        for(char ch:s){
            if(isalpha(ch)){
                str=str+ch;
            }
            else {
                special=special+ch;
            }

        }
     int low=0,high=str.size()-1;
        while(low<high){
            swap(str[low],str[high]);
            low++;
            high--;
        }
          int st=0,end=special.size()-1;
        while(st<end){
            swap(special[st],special[end]);
            st++;
            end--;
        }

        int left=0,right=0;
        for(char &ch:s){
            if(isalpha(ch)){
                ch=str[left];
                left++;

            }
            else{
                ch=special[right];
                right++;
            }
        }
        return s;
    }
};