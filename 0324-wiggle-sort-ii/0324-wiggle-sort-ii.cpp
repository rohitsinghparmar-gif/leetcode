class Solution {
public:
    void wiggleSort(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>small;
        vector<int>large;
        vector<int>ans;
        for(int i=0;i<(n+1)/2;i++){
            small.push_back(nums[i]);

        }
        for(int i=n-1;i>(n-1)/2;i--){
            large.push_back(nums[i]);
        }
       int i = small.size() - 1;
        int j = 0;
        while (i >= 0 || j < large.size()) {
            if (i >= 0)
                ans.push_back(small[i--]);
            if (j < large.size())
                ans.push_back(large[j++]);
        }
        nums=ans;

        
    }
};