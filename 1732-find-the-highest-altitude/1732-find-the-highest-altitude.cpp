class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        int gain=0;
        vector<int>arr;
        arr.push_back(gain);
        for(int i=0;i<nums.size();i++){
            gain=gain+nums[i];
            arr.push_back(gain);

        }
        int max=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }

        }
        return max;
    }
};