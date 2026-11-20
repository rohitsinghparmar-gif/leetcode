class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                ans.push_back(sum);

            }
        }
        sort(ans.begin(),ans.end());
        long long count=0;
        for(int i=left-1;i<right;i++){
            count=count+ans[i];
        }
        return count %(1000000000+7);
    }
};