#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, num;
        cin >> size >> num;
        cout << (num == 1 ? "YES\n" : "NO\n");
        for (int i = 1; i < size; i++)
            cin >> num;
    }

    return 0;
}

// if nums[0] = 1 then yes because other ele can be sotred using bubble sort idea