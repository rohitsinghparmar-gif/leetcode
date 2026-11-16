class Solution {
public:
    int heightChecker(vector<int>& height) {
      vector<int>ans(height.begin(),height.end());
      sort(ans.begin(),ans.end());
      int count=0;
      for(int i=0;i<ans.size();i++){
        if(height[i]!=ans[i]){
            count++;
        }
      }
      return count;
        
    }
};