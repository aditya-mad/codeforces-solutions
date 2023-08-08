#include <iostream>
#include <vector>
#include <unordered_map>
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
        long long sum = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            sum += nums[i];
        }

        double ans = (double)sum / size;

        if (ans == 1)
        {
            cout << 0 << endl;
        }
        else if (ans < 1.0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << sum - size << endl;
        }
    }

    return 0;
}