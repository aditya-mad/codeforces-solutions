#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size;
        cin >> size;

        vector<int> nums(size);

        for (int i = 0; i < size; i++)
            cin >> nums[i];

        sort(nums.begin(), nums.end());

        int mid = ceil((size * 1.0) / 2) - 1;
        int ans = 0;

        for (int i = mid + 1; i < size; i++)
        {
            if (nums[mid] == nums[i])
                ans++;
        }

        cout << ans + 1 << endl;
    }
}