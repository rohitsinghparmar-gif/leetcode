class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_set<int>st(arr.begin(),arr.end());
        vector<int>ans(st.begin(),st.end());
        sort(ans.begin(),ans.end());
        vector<int>nums;
        unordered_map<int, int> mp;
        for (int i = 0; i < ans.size(); i++) {
            mp[ans[i]] = i + 1;
        }
        for (int i = 0; i < arr.size(); i++) {
            nums.push_back(mp[arr[i]]);
        }

        return nums;
        
    }
};