// #include <bits/stdc++.h>
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
        vector<int> ans;
        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }
        ans.push_back(nums[0]);

        for (int i = 1; i < size; i++)
        {
            if (nums[i - 1] > nums[i])
                ans.push_back(1);
            ans.push_back(nums[i]);
        }

        cout << ans.size() << endl;

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
