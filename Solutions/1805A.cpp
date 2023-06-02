#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size, num, ans = 0;
        cin >> size;

        for (long long int i = 0; i < size; i++)
        {
            cin >> num;
            ans ^= num;
        }

        if (ans == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (size & 1)
            {
                cout << ans << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}