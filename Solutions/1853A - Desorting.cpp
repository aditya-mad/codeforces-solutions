#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int size, ans = 1e9 + 7;
        cin >> size;
        vector<int> nums(size);

        cin >> nums[0];
        for (int i = 1; i < size; i++)
        {
            cin >> nums[i];
            ans = min(ans, nums[i] - nums[i - 1]);
        }

        if (!is_sorted(nums.begin(), nums.end()))
            cout << 0 << endl;
        else
            cout << max(1, ans / 2 + 1) << endl;
    }

    return 0;
}
