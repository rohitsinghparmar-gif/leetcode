class Solution {
public:
    int passwordStrength(string arr) {
        set<char>nums;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            nums.insert(arr[i]);
        }
        
        for(char i:nums) {

            if(i=='!' || i=='@' || i=='$' || i=='#') {
                sum += 5;
            }
             if(isdigit(i)) {
                sum += 3;
            }
             if(isupper(i)) {
                sum += 2;
            }
            if (islower(i)) {
                sum += 1;
            }
        }
        
        return sum;
}   
};