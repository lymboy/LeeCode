//
// Created by sairo on 19-3-21.
//
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> map;

        for (int i=0; i<nums.size(); i++) {
            int temp = target - nums[i];
            if (map.find(temp) != map.end()) {
                vector<int> v;
                v.push_back(map[temp]);
                v.push_back(i);
                return v;
            }
            map[nums[i]] = i;
        }
        return vector<int>();
    }
};

int main()
{
    vector<int>nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> v = solution.twoSum(nums, target);
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
