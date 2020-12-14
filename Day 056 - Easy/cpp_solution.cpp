#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Interval {
    int start, end;
};

void mergeArrays(vector<Interval>& nums, int *n) {
    int x = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[x].end >= nums[i].start) {
            nums[x].start = min(nums[x].start, nums[i].start);
            nums[x].end = max(nums[x].end, nums[i].end);
        }
        else {
            ++x;
            nums[x] = nums[i];
        }
    }
    *n = x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // "Input number of elements: "
    int n;
    cin >> n;

    vector<Interval> nums(n);
    for (size_t i = 0; i < n; ++i)
    {
        cout << "Enter start and end for the " << (i + 1) << ". interval: ";
        cin >> nums[i].start >> nums[i].end;
    }

    sort(nums.begin(), nums.end(), [](auto&& a, auto&& b) { return a.start < b.start; });
    mergeArrays(nums, &n);

    for (size_t i = 0; i <= n; ++i)
        printf("[%d, %d]", nums[i].start, nums[i].end);

    return 0;
}