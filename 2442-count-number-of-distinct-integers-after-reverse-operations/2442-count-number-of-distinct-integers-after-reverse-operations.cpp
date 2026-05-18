class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n=n/10;

        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);

        }
        for(int i=0;i<nums.size();i++){
            int x=reverse(nums[i]);
            st.insert(x);

        }
        return st.size();
    }
};