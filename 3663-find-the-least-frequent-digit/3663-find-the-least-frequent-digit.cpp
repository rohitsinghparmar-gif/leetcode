class Solution {
public:
    int getLeastFrequentDigit(int n) {
         unordered_map<int,int> mp;
        vector<int> nums;

        if(n == 0) return 0;

        while(n > 0) {
            nums.push_back(n % 10);
            n /= 10;
        }

        for(int num : nums) {
            mp[num]++;
        }

        int minFreq = INT_MAX;
        for(auto it : mp) {
            minFreq = min(minFreq, it.second);
        }

        int ans = 9;
        for(auto it : mp) {
            if(it.second == minFreq) {
                ans = min(ans, it.first);
            }
        }

        return ans;
    
    }
};