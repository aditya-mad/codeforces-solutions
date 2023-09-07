#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;

        vector<pair<int, int>> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i].first >> nums[i].second;
        }

        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

        for (auto x : nums)
        {
            ans = min(ans, x.first + ((x.second - 1) / 2));
        }
        cout << ans << endl;
    }

    return 0;
}