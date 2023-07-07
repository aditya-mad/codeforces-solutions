#include <iostream>
#include <vector>
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
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < size / 2; i++)
        {
            ans += nums[size - i - 1] - nums[i];
        }

        cout << ans << endl;
    }
    return 0;
}