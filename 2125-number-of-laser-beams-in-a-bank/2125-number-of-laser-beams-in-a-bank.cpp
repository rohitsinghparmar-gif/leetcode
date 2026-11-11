class Solution {
public:
    int numberOfBeams(vector<string>& nums) {
        vector<int>arr;
        for(string s:nums){
            int sum=0;
            for(int j=0;j<s.size();j++){
                if(s[j]=='1'){
                    sum++;
                }
            }
            if(sum>0){
             arr.push_back(sum); 
            }
        }
        int product=0;
        for(int i=1;i<arr.size();i++){
           product+=arr[i]*arr[i-1];
        }
        return product;
    }
};