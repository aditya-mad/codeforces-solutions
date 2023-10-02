// #include <bits.stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, k;
        string strip;

        cin >> size >> k >> strip;

        bool flag = true;
        int ind = -1e9, ans = 0;
        for (int i = 0; i < size; i++)
        {
            if (ind == k)
            {
                ind = -1e9;
                ans++;
                flag = true;
            }
            if (strip[i] == 'B' && flag)
            {
                ind = 0;
                flag = false;
            }
            ind++;
        }

        if (ind > 0)
            ans++;

        cout << ans << endl;
    }

    return 0;
}
