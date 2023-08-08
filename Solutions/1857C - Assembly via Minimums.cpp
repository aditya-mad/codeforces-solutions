#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        int minvecsize = (size * (size - 1)) / 2;
        vector<int> nums(minvecsize), ans;
        map<int, int> memo;
        int curr = size - 1, maxele = INT_MIN;
        for (int i = 0; i < minvecsize; i++)
        {
            cin >> nums[i];
            memo[nums[i]]++;
            maxele = max(maxele, nums[i]);
        }

        for (auto &x : memo)
        {
            while (x.second > 0)
            {
                if (curr >= 0)
                {
                    ans.push_back(x.first);
                    x.second -= curr--;
                }
                else
                {
                    break;
                }
            }
        }
        ans.push_back(maxele);

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}