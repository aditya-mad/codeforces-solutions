#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        if (nums[0] != size)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> vertical(nums[0], 0), horizontal(nums[0], 0);

        for (auto x : nums)
        {
            horizontal[0] += 1;
            if (x < nums[0])
                horizontal[x]--;
        }

        for (int i = 1; i < nums[0]; i++)
        {
            horizontal[i] += horizontal[i - 1];
        }
        bool flag = true;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] != horizontal[i])
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}