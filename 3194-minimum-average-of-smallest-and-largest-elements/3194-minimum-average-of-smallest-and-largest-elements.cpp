class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<int>arr;
        int n=nums.size();
        double min=100.0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
          double current=(nums[i]+nums[n-i-1])/2.0;
          if(current<min){
            min=current;
          }

        }
        
        
        return min;
        
    }
};