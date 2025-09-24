#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s) {
            if(c == '(') st.push(')');
            else if(c == '{') st.push('}');
            else if(c == '[') st.push(']');
            else {
                if(st.empty() || st.top() != c) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    vector<string> tests = {"()", "()[]{}", "(]", "([)]", "{[]}"};
    for (const auto& test : tests) {
        cout << "Input: " << test << " -> " << (sol.isValid(test) ? "true" : "false") << endl;
    }
}