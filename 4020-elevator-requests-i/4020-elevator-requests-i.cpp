class Solution {
public:
    int elevatorRequests(int n, vector<int>& floor) {
        int ans=0;
        int curr=0;
        for(int i=0;i<floor.size();i++){
           if(floor[i]<=n){
               int x= abs(floor[i]-curr);
                ans=ans+x;
                curr=floor[i];}
            
        }
        return ans;
    }
};