class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>arr;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         arr.push_back(i);
        //     }
        // }
        // return arr;

        int count=0;
        int num=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                num++;

            }
             if(nums[i]<target){
                count++;
            }

        }
        for(int i=count;i<count+num;i++){
            arr.push_back(i);
        }  
        return arr;     
    }
};