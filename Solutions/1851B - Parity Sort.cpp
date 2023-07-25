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
        vector<int> nums(size), odd, even;

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            if (nums[i] % 2 == 1)
            {
                odd.push_back(nums[i]);
            }
            else
            {
                even.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        int oddi = 0, eveni = 0;
        vector<int> ans;

        for (auto x : nums)
        {
            if (x % 2 == 0)
            {
                ans.push_back(even[eveni++]);
            }
            else
            {
                ans.push_back(odd[oddi++]);
            }
        }
        sort(nums.begin(), nums.end());

        if (ans == nums)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}