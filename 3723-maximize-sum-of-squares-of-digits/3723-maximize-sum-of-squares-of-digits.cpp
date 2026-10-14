class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if((num*9)<sum){
            return "";
        } 
      string s="";
      int k=sum;
      while(k>0){
        if(k>9){
            s.push_back('9');
             k=k-9;
        }
        else{
            s.push_back(k+'0');
            break;   
        }
      }

      while(s.size()<num){
        s.push_back('0');
      }
      return s;
    }
};