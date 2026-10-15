class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                set<int>a;
                for(int k=i;k<=j;k++){
                    a.insert(nums[k]);
                }
                int x=a.size();
                sum=sum+x*x;
            }
        }
        return sum;
        
    }
};