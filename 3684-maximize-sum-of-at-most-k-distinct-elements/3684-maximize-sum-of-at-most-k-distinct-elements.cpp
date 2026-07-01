class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int>st;
        
        for(int x:nums){
            st.insert(x);
        }
        vector<int>arr(st.begin(),st.end());
        sort(arr.begin(), arr.end());

k = min(k, (int)arr.size());

        vector<int> ans;
        for (int i = arr.size() - 1; i >=(int)arr.size() - k; i--) {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};