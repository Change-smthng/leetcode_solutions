#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if (n < k) {
            return false;
        }
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int ev = 0, sod = 0, pod = 0;
        for (auto i : mp) {
            if (i.second & 1) {
                if (i.second == 1) {
                    sod++;
                } else {
                    pod++;
                }
            } else {
                ev++;
            }
        }
        if (sod + pod > k) {
            return false;
        }
        return true;
    }
};

int main() {
    Solution solution;
    string s; cin >> s;
    int k; cin >> k;
    bool ans = solution.canConstruct(s, k);

    // Option 1: Direct output with boolalpha
    cout << boolalpha << ans;

    // Option 2: Using ternary operator
    // cout << (ans ? "true" : "false");

    return 0;
}
