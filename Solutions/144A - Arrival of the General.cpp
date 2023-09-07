#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int nums[size], maxindex = 0, minindex = 0, ans = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (nums[maxindex] < nums[i])
            maxindex = i;
        if (nums[minindex] >= nums[i])
            minindex = i;
    }

    if (minindex < maxindex)
        ans--;
    ans += (maxindex + size - 1 - minindex);

    cout << ans;

    return 0;
}