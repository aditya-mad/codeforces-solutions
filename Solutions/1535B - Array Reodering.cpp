#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        vector<int> nums(size), even, odd;
        unordered_map<int, int> memo;
        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            if (nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }

        sort(even.rbegin(), even.rend());

        int i = 0;

        for (auto x : even)
        {
            nums[i++] = x;
        }

        for (auto x : odd)
        {
            nums[i++] = x;
        }

        int ans = 0;
        for (i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (__gcd(nums[i], 2 * nums[j]) > 1)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}