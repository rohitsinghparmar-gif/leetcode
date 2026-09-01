class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        int low=0;
        int high=0;
        while(low<nums1.size()  && high<nums2.size()){
            if(nums1[low]<nums2[high]){
                nums.push_back(nums1[low]);
                low++;
            }
             else{
                nums.push_back(nums2[high]);
                high++;
            }
        }
         while (low < nums1.size()) {
            nums.push_back(nums1[low]);
            low++;
        }
          while (high < nums2.size()) {
            nums.push_back(nums2[high]);
            high++;
        }
        int n=nums.size();
        if(n%2!=0){
            return nums[n/2];
        }
        
    return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
        
        
        
    }
};