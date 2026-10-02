class Solution {
public:
    void solve(string s, int open, int close, int n,
               vector<string>& ans) {

        // Complete valid string
        if (s.length() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // Add opening bracket
        if (open < n) {
            solve(s + "(", open + 1, close, n, ans);
        }

        // Add closing bracket
        if (close < open) {
            solve(s + ")", open, close + 1, n, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        solve("", 0, 0, n, ans);

        return ans;
    }
};