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
        int n, k;
        cin >> n >> k;

        if (n % k == 0)
            cout << 2 << endl

                 << n - 1 << " " << 1;
        else
            cout << 1 << endl
                 << n;
        cout << endl;
    }

    return 0;
}
