#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        vector<int> nums;
        int size;
        cin >> size;

        nums = vector<int>(size);

        for (int i = 0; i < size; i++)
            cin >> nums[i];

        sort(nums.begin(), nums.end());

        if (nums[0] == nums.back())
        {
            cout << -1 << endl;
            continue;
        }

        int ind = 0;
        while (nums[0] == nums[ind])
            ind++;

        cout << ind << " " << size - ind << endl;

        for (int i = 0; i < size; i++)
        {
            if (i == ind)
                cout << endl;
            cout << nums[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
