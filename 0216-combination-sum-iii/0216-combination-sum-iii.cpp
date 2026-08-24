class Solution {
public:
// set<vector<int>>s;
  void getAllCombination(int k, int target,int i,vector<vector<int>>&ans,vector<int>&combin){
   
    if(target==0 &&combin.size()==k){
        // if(s.find(combin)==s.end()){
            ans.push_back(combin);
            // s.insert(combin);
        // }
        return;

    }
    if(target<0 || combin.size()==k||i>9){
        return;
    }
   
    combin.push_back(i);
     getAllCombination( k,  target-i, i+1,ans,combin);
     combin.pop_back();
     getAllCombination(k, target, i + 1, ans, combin);

  }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<vector<int>>ans;
        vector<int>combin;
        getAllCombination(k,target,1,ans,combin);
        return ans;
    }
};
// class Solution {
// public:

//     void getAllCombination(int k, int target, int i,
//                             vector<vector<int>>& ans,
//                             vector<int>& combin) {

//         // Exactly k numbers and target reached
//         if (target == 0 && combin.size() == k) {
//             ans.push_back(combin);
//             return;
//         }

//         // Invalid condition
//         if (target < 0 || combin.size() == k || i > 9) {
//             return;
//         }

//         // Take i
//         combin.push_back(i);

//         getAllCombination(k, target - i, i + 1, ans, combin);

//         // Backtrack
//         combin.pop_back();

//         // Don't take i
//         getAllCombination(k, target, i + 1, ans, combin);
//     }

//     vector<vector<int>> combinationSum3(int k, int target) {

//         vector<vector<int>> ans;
//         vector<int> combin;

//         getAllCombination(k, target, 1, ans, combin);

//         return ans;
//     }
// };