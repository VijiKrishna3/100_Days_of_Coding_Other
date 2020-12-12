#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // "Input number of elements: "
    int n;
    cin >> n;

    // Input the elements
    vector<long> nums(n);
    for (size_t i = 0; i < n; ++i)
        cin >> nums[i];

    // "Input k: "
    long k;
    cin >> k;

    bool found = false;
    for (auto it = nums.begin(); it < nums.end(); ++it) {
        long res = k - *it;
        auto findRes = find(nums.begin(), nums.end(), res);
        if (findRes != nums.end() && findRes != it) {
            found = true;
            break;
        }
    }

    if (found) cout << "true" << endl;
    else cout << "false" << endl;
}