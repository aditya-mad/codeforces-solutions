#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        vector<int> nums(size);
        long long int sum = 0, times = 0;

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            sum += abs(nums[i]);
        }

        int count = 0;

        for (auto x : nums)
        {
            if (x == 0 && count == 0)
            {
                continue;
            }
            else if (x <= 0)
            {
                count++;
            }
            else if (count > 0)
            {
                count = 0;
                times++;
            }
        }

        if (count)
        {
            times++;
        }

        cout << sum << " " << times << endl;
    }

    return 0;
}