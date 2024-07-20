#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, k;
        cin >> size >> k;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
            cin >> nums[i];

        cout << (is_sorted(nums.begin(), nums.end()) || k > 1 ? "YES\n" : "NO\n");
    }

    return 0;
}