#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // "Input number of elements: "
    int n;
    cin >> n;

    // Input the elements and square them right away
    vector<long> nums(n);
    for (size_t i = 0; i < n; ++i)
    {
        cin >> nums[i];
        nums[i] *= nums[i];
    }
    
    sort(nums.begin(), nums.end());
    for(auto elem : nums)
        cout << elem << " ";
    return 0;
}