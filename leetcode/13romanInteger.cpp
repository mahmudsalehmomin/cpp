#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(char c : s) {
            sum += c;
        }
        return sum;
    }
};

int main() {
    Solution sol;
    string s = "III";
    int result = sol.romanToInt(s);
    cout << "Roman numeral: " << s << " -> Integer: " << result << endl;
    return 0;
}