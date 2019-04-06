//
// Created by sairo on 19-3-22.
//

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring1(string s) {
        int len = s.length();
        int ans = 0;
        for (int i=0; i<=s.length()-len && len > 0; i++) {
            if (checkUniq(s, i, len)) {
                ans = max(ans, len);
                break;
            }
            if (i == (s.length()-len)) {
                i = -1;
                len--;
            }
        }
        return ans;
    }

    bool checkUniq(string s, int start, int length) {
        map<char, int> con;
        while (length--) {
            if (con.find(s[start]) == con.end()) {
                con[s[start]] = 0;
                start++;
            } else {
                return false;
            }
        }
        return true;
    }




    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int l = left;
        int ans = 0;
        unordered_set<char> con;
        while (left < s.size()) {
            l = left;
            if (con.find(s[right]) == con.end()) {
                con.insert(s[right]);
                right++;
            } else {
                con.clear();
                left = right;
            }
            ans = max(ans, right-l);
        }
        con.clear();
        return ans;
    }
};

int main(void) {
    string str = "amqpcsrumjjufpu";

    Solution solution;
    int ans = solution.lengthOfLongestSubstring(str);
    cout << ans << endl;

    return 0;
}