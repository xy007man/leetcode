#include <iostream>
#include <vector>

using namespace std;

/*
(i.e.,0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).
 查找 target 在有序数组中所在的位置
*/
int search(const vector<int>& nums, int target) {

    int first=0, last=nums.size();

    while (first != last) {

        int mid = (last + first)/2;

        if (nums[mid] == target) {
            return mid;
        }
        /* 不确定数组的顺序 */
        if (nums[mid] >= nums[first]) { // 递增
            if (target >= nums[first] && target < nums[mid])
                last = mid;
            else
                first = mid + 1;
        }
        else {
            if (target > nums[mid] && target <= nums[last-1])
                first = mid + 1;
            else
                last = mid;
        }
    }

    return -1;

}
int main()
{

    int a[6] = {1,2,8,9,11,15};
    vector<int> nums(a, a+6);

    cout << search(nums, 2) << endl;

    cout << search(nums, 0) << endl;

    return 0;
}
