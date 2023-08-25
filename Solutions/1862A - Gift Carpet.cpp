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
        int row, col;
        cin >> row >> col;
        vector<string> nums(row);

        for (int i = 0; i < row; i++)
        {
            cin >> nums[i];
        }

        string name = "vika";
        string ans = "";
        int ind = 0;
        for (auto x : name)
        {
            bool flag = true;
            for (int i = ind; i < col && flag && ans != "vika"; i++)
            {
                for (int j = 0; j < row; j++)
                {
                    if (nums[j][i] == x)
                    {
                        ans = ans + x;
                        flag = false;
                        ind = i + 1;
                        break;
                    }
                }
            }
        }
        cout << (ans == name ? "YES" : "NO") << endl;
    }

    return 0;
}
