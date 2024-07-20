#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, dist, ans = 0;
        cin >> size >> dist;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
            cin >> nums[i];

        ans = nums[0];

        for (int i = 1; i < size; i++)
            ans = max(ans, nums[i] - nums[i - 1]);
        cout << max(ans, (dist - nums.back()) * 2) << endl;
    }

    return 0;
}