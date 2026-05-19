class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>arr;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j]){
        //             arr.push_back(nums1[i]);
        //         }
        //     }
        // }
        // return arr[0];
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return -1;
    }
};