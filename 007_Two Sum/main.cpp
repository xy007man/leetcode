#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {

    unordered_map<int, int> map;
    vector<int> res;

    for (int i=0; i<nums.size(); i++) {
        map[nums[i]] = i;
    }

    for (int i=0; i<nums.size(); i++) {
        int gap = target - nums[i];
        if (map.find(gap) != map.end() && map[gap] > i) {
            res.push_back(i + 1);
            res.push_back(map[gap] + 1);
        }
    }

    return res;
}

int main()
{

    int a[] = {100, 4, 200, 1, 3, 2};

    vector<int> nums(a, a+6);

    vector<int> res = twoSum(nums, 7);

    for (int i=0; i<res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}
