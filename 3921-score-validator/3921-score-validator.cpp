class Solution {
public:
    vector<int> scoreValidator(vector<string>& nums) {
        int sum=0,counter=0;
        for(int i=0;i<nums.size();i++){
            if(counter==10){
                break;
            }
            if(nums[i]=="W"){
                counter++;
            }
             if(nums[i]=="NB"){
                sum++;
            }
             if(nums[i]=="WD"){
                sum++;
            }
             if(nums[i]=="1"){
                sum++;
            }
             if(nums[i]=="4"){
                sum=sum+4;
            }
             if(nums[i]=="6"){
                sum=sum+6;
            }
             if(nums[i]=="2"){
                sum=sum+2;
            }
             if(nums[i]=="3"){
                sum=sum+3;
            }
        }
  
        return {sum,counter};
        
    }
};