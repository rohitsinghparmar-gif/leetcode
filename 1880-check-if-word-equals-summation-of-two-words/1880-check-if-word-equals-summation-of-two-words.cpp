class Solution {
public:
    bool isSumEqual(string word1, string word2, string target) {
        int sum1=0;
        int sum2=0;
        int count1=1;
        int count2=1;
        int target1=0;
        int count3=1;
        for(int i=word1.size()-1;i>=0;i--){
            int x=word1[i]-'a';
            sum1=sum1+count1*x;
            count1=count1*10;

        }
           for(int i=word2.size()-1;i>=0;i--){
            int x=word2[i]-'a';
            sum2=sum2+count2*x;
            count2=count2*10;

        }
           for(int i=target.size()-1;i>=0;i--){
            int x=target[i]-'a';
            target1=target1+count3*x;
            count3=count3*10;

        }
        if(sum1+sum2==target1){
            return true;
        }
        return false;
        
    }
};