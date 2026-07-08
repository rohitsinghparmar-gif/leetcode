class Solution {
public:
    string maximumOddBinaryNumber(string nums) {
       string zeroes="";
       string ones="";
        for(char ch:nums){
            if(ch=='0'){
                zeroes+="0";
            }
            if(ch=='1'){
                ones+="1";
            }


        }
        if(ones.size()==1){
            return zeroes+ones;
        }
        
        string x=ones.substr(0,ones.size()-1)+zeroes+"1";
        return x;
        
    }
};