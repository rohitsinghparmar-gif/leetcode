class Solution {
public:
 vector<string> ans;

    bool valid(string s) {
        int count = 0;

        for (char c : s) {
            if (c == '(')
                count++;
            else
                count--;

            if (count < 0)
                return false;
        }

        return count == 0;
    }

    void generate(string curr, int n) {
        if (curr.size() == 2 * n) {
            if (valid(curr))
                ans.push_back(curr);
            return;
        }

        generate(curr + "(", n);
        generate(curr + ")", n);
    }
 
    vector<string> generateParenthesis(int n) {
            generate("", n);
        return ans;


        
    }
};