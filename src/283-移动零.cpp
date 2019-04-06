//
// Created by sairo on 19-4-1.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nonZero;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                nonZero.push_back(nums[i]);
            }
        }
        for (int i=0; i<nums.size(); i++) {
            if (i<nonZero.size()) {
                nums[i] = nonZero[i];
            } else {
                nums[i] = 0;
            }
        }
    }


    void moveZeroes2(vector<int>& nums) {
        int a = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[a], nums[i]);
                a++;
            }
        }
    }

    void moveZeroes3(vector<int>& nums) {
        int a = -1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                nums[++a] = nums[i];
            }
        }
        for (int i=a+1; i<nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
int main(void)
{
    int a[] = {0, 1, 0, 3, 1, 6};
    vector<int> v(a, a+6);
    Solution s;
    s.moveZeroes3(v);

    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
