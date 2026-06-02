class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //          return true;
        //         }

        //     }
        // }
    
        // return false;
    unordered_set<int> s;
    for(int num:nums){
        s.insert(num);
    }
    if(s.size()==nums.size()){
        return false;
    }
    return true;

    // for(int num : nums){
    //     if(s.count(num)){
    //         return true;
    //     }
    //     s.insert(num);
    // }

    // return false;
        
    }
};