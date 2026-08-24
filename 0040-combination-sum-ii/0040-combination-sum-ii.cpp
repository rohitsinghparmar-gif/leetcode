class Solution {
public:
// set<vector<int>>s;
  void getAllCombination(vector<int>& arr, int target,int i,vector<vector<int>>&ans,vector<int>&combin){
    if(target==0){
        // if(s.find(combin)==s.end()){
            // s.insert(combin);
            ans.push_back(combin);
        // }
        return;
    }
    if(target<0||i>=arr.size()){
        return;
    }

    combin.push_back(arr[i]);

     getAllCombination( arr,  target-arr[i], i+1,ans,combin);
     //single
    //   getAllCombination( arr,  target-arr[i], i,ans,combin);
      //multi but we have to choose only one
      combin.pop_back();
       while(i + 1 < arr.size() && arr[i] == arr[i + 1]) {
            i++;
        }
      
          getAllCombination( arr,  target, i+1,ans,combin);
       
       //exclude
    
  }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>combin;
        sort(arr.begin(),arr.end());
        getAllCombination(arr,target,0,ans,combin);
        return ans;
        
    }
};