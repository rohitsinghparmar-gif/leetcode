class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int count=0;
        vector<int>nums;
        for(char ch:seq ){
           
            if(ch=='('){
                nums.push_back(count%2);
                count++;
            }
             
            else{
                count--;
                nums.push_back(count%2);
              
                
            }
           
        }
        return nums;
        
    }
};