#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, k, num;
        bool ans = false;

        cin >> size >> k;

        while (size--)
        {
            cin >> num;
            ans |= num == k;
        }

        cout << (ans ? "YES\n" : "NO\n");
    }

    return 0;
}
