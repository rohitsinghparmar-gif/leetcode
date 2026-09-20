class Solution {
public:
int encrypt(int n){
    int maxi=1;
    int count=0;
    while(n>0){
        int digit=n%10;
        count++;
        maxi=max(digit,maxi);
        n=n/10;
    }
    if(count==1){
        return maxi;
    }
    if(count==2){
        return 11*maxi;
    }
    if(count==4){
        return 1111*maxi;
    }
    return 111*maxi;
}
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+encrypt(nums[i]);

        }
        return sum;
     
    }
};