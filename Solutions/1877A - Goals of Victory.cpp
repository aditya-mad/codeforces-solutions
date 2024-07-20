#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, ans = 0, num;
        cin >> size;

        while (--size)
        {
            cin >> num;
            ans += num;
        }

        cout << -ans << endl;
    }

    return 0;
}
