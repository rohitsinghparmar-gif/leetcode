class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int> a;
            
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]>0){
                a.push_back(nums[i]);
            }
            else{
                int current=abs(nums[i]);
                bool x=false;
                while(!a.empty() && a.back()>0){
                    int top=abs(a.back());
                    if(top<current){
                        a.pop_back();

                    }
                    else{
                        if(top==current){
                            a.pop_back();

                        }
                        x=true;
                        break;
                    }
                }
                if(!x){
                a.push_back(nums[i]);
            }
            }
            
        }

  

      

        return a;
    }
};

