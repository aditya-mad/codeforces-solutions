#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size, ans = 0;
        cin >> size;
        vector<long long int> nums(size);
        unordered_map<long long int, long long int> memo;

        for (long long int i = 0; i < size; i++)
        {
            cin >> nums[i];
            memo[__builtin_clz(nums[i])]++;
        }

        for (auto x : memo)
        {
            if (x.second > 1)
            {
                ans += (x.second * (x.second - 1)) / 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}