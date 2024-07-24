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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b <= d && a + d - b >= c)
            cout << d - b + a + d - b - c << endl;
        else
            cout << "-1\n";
    }

    return 0;
}
