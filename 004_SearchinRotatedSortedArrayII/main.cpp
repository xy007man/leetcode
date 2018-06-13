#include <iostream>
#include <vector>

using namespace std;

/* 找出递增的分组 */
bool search(const vector<int>& nums, int target) {

    int first=0, last=nums.size();

    while (first != last) {

        int mid = (first + last) / 2;

        if (nums[mid] == target) {
            return true;
        }
        else if (nums[first] < nums[mid]) { // 递增的分组
            if (nums[first] <= target && target < nums[mid])
                last = mid;
            else
                first = mid + 1;
        }
        else if (nums[first] > nums[mid]) {
            if (nums[mid] < target && target <= nums[last-1])
                first = mid + 1;
            else
                last = mid;
        }
        else {
            first++;
        }
    }

    return false;
}

int main()
{
    int a[6] = {11,15,1,2,8,9};
    vector<int> nums(a, a+6);

    cout << search(nums, 2) << endl;

    cout << search(nums, 12) << endl;

    return 0;
}
