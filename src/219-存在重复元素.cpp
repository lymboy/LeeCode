//
// Created by sairo on 19-4-1.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for (int i=0; i<nums.size(); i++) {
            if (m.find(nums[i]) != m.end()) {
                int dis = i-m[nums[i]];
                if (dis <= k) {
                    return true;
                } else {
                    m[nums[i]] = i;
                }
            } else {
                m[nums[i]] = i;
            }
        }
        return false;
    }
};

int main(void)
{
    int nums[] = {1,2,3,1};
    int k = 3;

    vector<int> v(nums, nums+4);
    Solution s;
    bool ans = s.containsNearbyDuplicate(v, k);
    if (ans) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}
