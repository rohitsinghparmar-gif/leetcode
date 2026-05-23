class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>arr;
       
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
             int sum=0;
            int x=nums[i];
            while(x>0){
                int digit=x%10;
                sum+=digit;
                x/=10;
            }
            arr.push_back(sum);
         
        }
       sort(arr.begin(),arr.end());
        
        return arr[0];
    
    }
};