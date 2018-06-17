#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int longestConsecutive(const vector<int> &nums) {

    unordered_map<int, bool> used;
    int longest = 0;

    for (auto i : nums) {
        used[i] = false;
    }

    for (auto i : nums) {

        if (used[i])
            continue;

        int length = 1;

        for (int j=i+1; used.find(j) != used.end(); j++) {
            used[i] = true;
            length++;
        }
        for (int j=i-1; used.find(j) != used.end(); j--) {
            used[i] = true;
            length++;
        }

        longest = length > longest ? length : longest;
    }

    return longest;

}

int main()
{
    int a[] = {100, 4, 200, 1, 3, 2};

    vector<int> nums(a, a+6);

    cout << longestConsecutive(nums) << endl;

    return 0;
}
