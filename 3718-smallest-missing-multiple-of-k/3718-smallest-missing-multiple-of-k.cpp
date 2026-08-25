class Solution {
public:
    int missingMultiple(vector<int>& arr, int k) {
        vector<int> nums;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] % k == 0) {
                nums.push_back(arr[i]);
            }
        }

        sort(nums.begin(), nums.end());

        int count = k;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == count) {
                count += k;
            }
            else if(nums[i] > count) {
                return count;
            }
        }

        return count;
    }
};