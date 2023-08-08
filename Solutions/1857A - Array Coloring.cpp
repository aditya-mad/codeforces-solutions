#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, odd = 0, even = 0;
        cin >> size;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            if (nums[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        cout << (odd % 2 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}