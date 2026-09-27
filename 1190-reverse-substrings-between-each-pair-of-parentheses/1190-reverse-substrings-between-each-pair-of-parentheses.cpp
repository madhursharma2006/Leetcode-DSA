class Solution {
public:
    string reverseParentheses(string s) {

        stack<string> st;
        string curr = "";

        for (char ch : s) {

            if (ch == '(') {

                // Save current string
                st.push(curr);

                // Start new string
                curr = "";
            }

            else if (ch == ')') {

                // Reverse current string
                reverse(curr.begin(), curr.end());

                // Get previous string
                curr = st.top() + curr;
                st.pop();
            }

            else {
                curr += ch;
            }
        }

        return curr;
    }
};