class Solution {
public:
    bool validDigit(int n, int x) {
 if (n == 0) {
            return false; // or true, depending on the problem requirement
        }

        vector<int> nums;
        while (n > 0) {
            nums.push_back(n % 10);
            n /= 10;
        }

        int n1 = nums.size();

        if (nums[n1 - 1] == x) {
            return false;
        }

        for (int i = 0; i < n1 - 1; i++) {
            if (nums[i] == x) {
                return true;
            }
        }

        return false;
    }
};