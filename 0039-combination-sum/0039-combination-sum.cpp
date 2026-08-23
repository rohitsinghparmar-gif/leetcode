
class Solution {
public:
set<vector<int>>s;
    void getAllCombinations(vector<int>& arr, int target, int i,
                            vector<vector<int>>& ans,
                            vector<int>& combin) {

        if (target == 0) {
            if(s.find(combin)==s.end()){
                 ans.push_back(combin);
                 s.insert(combin);
            }
           
            return;
        }

        if (i == arr.size() || target < 0) {
            return;
        }

        // Take arr[i] and move to next index
        combin.push_back(arr[i]);
        getAllCombinations(arr, target - arr[i], i + 1, ans, combin);

        // Take arr[i] again
        getAllCombinations(arr, target - arr[i], i, ans, combin);

        // Backtrack
        combin.pop_back();

        // Don't take arr[i]
        getAllCombinations(arr, target, i + 1, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        getAllCombinations(arr, target, 0, ans, combin);

        return ans;
    }
};