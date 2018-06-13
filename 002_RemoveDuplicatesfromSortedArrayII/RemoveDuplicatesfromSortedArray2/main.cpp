#include <iostream>
#include <vector>

using namespace std;

/*
Followupfor”RemoveDuplicates”: Whatifduplicatesareallowedatmosttwice?
Forexample,
GivensortedarrayA = [1,1,1,2,2,3],
Yourfunctionshouldreturnlength=5,andAisnow[1,1,2,2,3]
*/

int removeDuplicates(vector<int>& nums) {

    if (nums.size() <= 2)
        return nums.size();
    /* 前两个元素不需要改变 */
    int index = 2;
    for (int i=2; i<nums.size(); i++) {
        if (nums[i] != nums[index -2])
            nums[index++] = nums[i];
    }

    return index;

}
int main()
{
    int a[6] = {1,1,1,2,2,3};
    vector<int> nums(a, a+6);

    int num = removeDuplicates(nums);

    for (int i=0; i<num; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
