class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        vector<int>freq(26,0);
        for(char ch:word){
            freq[ch-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int sum=0;
        for(int i=0;i<freq.size();i++){
            if(i<8){
                sum=sum+freq[i];
            }
             else if(i<16){
                sum=sum+freq[i]*2;
            }
             else if(i <24){
                sum=sum+freq[i]*3;
            }
            else{
                sum=sum+freq[i]*4;
            }
        }
        return sum;

        
    }
};