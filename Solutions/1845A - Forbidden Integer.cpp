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
        int n, x, k;
        cin >> n >> k >> x;

        if (x != 1)
        {
            cout << "YES\n";
            cout << n << endl;
            while (n--)
                cout << 1 << " ";
            cout << endl;
        }
        else if (k == 1 || (k == 2 && n % 2))
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << n / 2 << endl;
            if (n % 2)
                cout << 3 << " ";
            else
                cout << 2 << " ";
            for (int i = 0; i < n / 2 - 1; i++)
                cout << 2 << " ";
            cout << endl;
        }
    }

    return 0;
}
