#include <iostream>
using namespace std;

int main()
{
    int test = 1;
    // cin >> test;

    for (; test--;)
    {
        int size, num, ans = 1e5 + 1;
        cin >> size;

        while (size--)
        {
            cin >> num;
            ans = min(ans, num >= 0 ? num : -num);
        }

        cout << ans << endl;
    }

    return 0;
}
