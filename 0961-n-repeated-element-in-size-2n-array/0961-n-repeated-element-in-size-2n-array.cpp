class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int x=n/2;
        vector<int>ans(n,0);
        sort(nums.begin(),nums.end() );
        for(int num:nums){
            ans[num]++;

        }
        int count=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]>0 ){
                count++;
            }
            if(ans[i]==x){
                break;
            }
        }
        return nums[count];
    }
};